cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(arculator VERSION 1.0)

add_executable(arculator
equations/angle.cpp
equations/angle.h
equations/area.cpp
equations/area.h
equations/currency.cpp
equations/currency.h
equations/data.cpp
equations/data.h
equations/energy.cpp
equations/energy.h
equations/length.cpp
equations/length.h
equations/power.cpp
equations/power.h
equations/pressure.cpp
equations/pressure.h
equations/speed.cpp
equations/speed.h
equations/temperature.cpp
equations/temperature.h
equations/time.cpp
equations/time.h
equations/volume.cpp
equations/volume.h
equations/weight.cpp
equations/weight.h
main.cpp
)

install(TARGETS arculator DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

