
Originally from code.google.com/p/server1

This is a cross-platform full dual rpc protobuf service, there are some point:
  * cross-platform, it is because the boost asio and protobuf are cross-platform.
  * It implement the protobuf rpc service.
  * dual rpc, the client can call server rpc service, and the server can call back the client service, the example like:
    * 1. server\_connection.RegisterService(server\_service);
    * 2. server start.
    * 3. client\_connection.RegisterService(client\_serivce)
    * 4. client\_connection connect to server
    * 5. client stub call to server service.
    * 6. // In the server
    * 7. The server get the client connection and call the client service.
    * 8. The server call back to client is useful when server need to push emergence message to client, it is a good elaborate to the "long connection".
  * a lightweight thread pool.

# Details #
  * The server example: http://code.google.com/p/server1/source/browse/trunk/server/posix_main.cpp
  * The client example: http://code.google.com/p/server1/source/browse/trunk/server/posix_client.cpp

a c++ network server/client framework , there are some point:
  * cross-platform, it is constructed on the boost asio and protobuffer, both the boost asio and protobuf are cross-platform.
  * It implement the protobuf rpc service.
  * dual rpc, the client can call server rpc service, the server can call back the client service, the server call back to client is useful when server need to push emergence message to client, it is a good elaborate to the "long connection".
  * With a cross-platform producer consumer queue and a cross-platform thread pool base on boost thread.
  * Integrate with a cross-platform timer.
  * Integrate with the logging system: glog
  * Integrate with the testing framework: gtest
  * Integrate with the commandline processing: gflag
  * Integrate with openssl/zlib
  * Unify all the above under the scons.

**Benchmark, on the debug version, server/client on the same machine:
  * Machine: 2 core, CPU 2.8GHZ, 2G memory dell workstation, ubuntu.
  * $build/server/server0 -v=-1
  * $time build/server/client0 -v=0 --num\_threads=20 --num\_connections=4000
    * real    0m15.373s
    * user    0m13.562s
    * sys     0m3.979s
    * The client will send num\_threads multiple num\_connections  request to server and wait the response, and to each request of the client, the server will first send the response then init another request to client and wait response.
So there is num\_threads multiple num\_connections multiple 2 request/reply.
The QPS is:20 multiple 4000 multiple 2 divide 15.373 = 10407 request/response per second.**

# Introduction #
The benchmark run the 50K long connection in a dell ubuntu labtop.
**config the system to support large socket connection
  * set the file size: /etc/security/limits.conf.
  * echo "3000 61000" >/proc/sys/net/ipv4/ip\_local\_port\_range, or sysctl -w net.ipv4.ip\_local\_port\_range ='3000 61000'** build and run command:
  * start server: build/server/server0 -v=0
  * start client: build/server/client0 --num\_threads=10 --num\_connections=50000 -v=0
    * The client will [issue 50000](https://code.google.com/p/server1/issues/detail?id=50000) connections, and do 10 times rpc call.
  * The test scheme is the client call the server rpc service, then the server call the client's registered service on the connected connection.
  * the server code:http://code.google.com/p/server1/source/browse/trunk/server/posix_main.cpp
  * the client code:http://code.google.com/p/server1/source/browse/trunk/server/posix_client.cpp
  * turn on/off the heapcheck of googleperf-tool to detect the memory leaky.

# How to build #

 * Package should install(assume your source is path/src):
  * 1. scons
  * 2. Install all the packages to path/third\_party:
    * boost1.39
      * should install to path/third\_party/boost, like: ./bootstrap.sh --prefix=path/third\_party --libdir=path/third\_party/boost/lib --includedir=path/third\_party/boost/include
    * gflag
      * Install to path/third\_party/gflag
    * glog
      * Install to path/third\_party/glog with ./configure --with-gflags=path/third\_party/gflags
    * protobuf
      * Install to path/third\_party/protobuf
    * gtest
      * Install to path/third\_party/gtest
    * tcmalloc (for heap checker)
      * Install to /usr/lib or /usr/local/lib, be sure to set the LD\_LIBRARY\_PATH when can't find the lib.
  * run scons under path/src

# How to configure linux kenerl parameter to support large connection(over 40K) in the Ubuntu. #
  * set the file size: /etc/security/limits.conf.
  * echo "32768 61000" >/proc/sys/net/ipv4/ip\_local\_port\_range, or   sysctl -w net.ipv4.ip\_local\_port\_range ='32768 61000'


