#!/bin/sh
# Space time raster dataset aggregation
# We need to set a specific region in the
# @preprocess step of this test. 

export GRASS_OVERWRITE=1

# The region setting should work for UTM and LL test locations
g.region s=0 n=80 w=0 e=120 b=0 t=50 res=10 res3=10 -p3

# Generate data
r.mapcalc expr="prec_1 = rand(0, 550)" -s
r.mapcalc expr="prec_2 = rand(0, 450)" -s
r.mapcalc expr="prec_3 = rand(0, 320)" -s
r.mapcalc expr="prec_4 = rand(0, 510)" -s
r.mapcalc expr="prec_5 = rand(0, 300)" -s
r.mapcalc expr="prec_6 = rand(0, 650)" -s
r.mapcalc expr="prec_7 = null()"

t.create type=strds temporaltype=absolute output=precip_abs1 title="A test" descr="A test"
t.register -i type=rast input=precip_abs1 maps=prec_1,prec_2,prec_3,prec_4,prec_5,prec_6,prec_7 \
    start="2001-01-15 12:05:45" increment="14 days"

# The first @test
t.rast.aggregate --v input=precip_abs1 output=precip_abs2 \
    base=prec_sum granularity="2 days" method=average \
    sampling=overlaps,overlapped,during nprocs=5 -sn
t.info type=strds input=precip_abs2
t.rast.list input=precip_abs1
t.rast.list input=precip_abs2

t.rast.aggregate --v input=precip_abs1 output=precip_abs2 \
    base=prec_sum granularity="1 months" method=maximum \
    sampling=contains nprocs=5 -n 
t.info type=strds input=precip_abs2
t.rast.list input=precip_abs1
t.rast.list input=precip_abs2

t.rast.aggregate --v input=precip_abs1 output=precip_abs3 offset=10 \
    base=prec_sum granularity="2 months" method=minimum \
    sampling=contains
t.info type=strds input=precip_abs3
t.rast.list input=precip_abs3

t.rast.aggregate --v input=precip_abs1 output=precip_abs4 offset=100 \
    base=prec_sum granularity="3 months" method=sum \
    sampling=contains
t.info type=strds input=precip_abs4
t.rast.list input=precip_abs4

t.remove -rf type=strds input=precip_abs1,precip_abs2,precip_abs3,precip_abs4
