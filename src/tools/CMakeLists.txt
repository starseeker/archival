add_subdirectory(timer)
add_subdirectory(g.html2man)

CMAKE_MANAGE_FILES(mkhtml.py tools)

add_executable(g.echo g.echo.c)
