cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(arculator VERSION 1.0)

add_executable(arculator
partials/intro.cpp
partials/intro.h
partials/menu.cpp
partials/menu.h
partials/invalidinput.cpp
partials/invalidinput.h
partials/programs/angle.cpp
partials/programs/angle.h
partials/programs/area.cpp
partials/programs/area.h
partials/programs/data.cpp
partials/programs/data.h
partials/programs/energy.cpp
partials/programs/energy.h
partials/programs/length.cpp
partials/programs/length.h
partials/programs/power.cpp
partials/programs/power.h
partials/programs/pressure.cpp
partials/programs/pressure.h
partials/programs/speed.cpp
partials/programs/speed.h
partials/programs/temperature.cpp
partials/programs/temperature.h
partials/programs/time.cpp
partials/programs/time.h
partials/programs/volume.cpp
partials/programs/volume.h
partials/programs/weight.cpp
partials/programs/weight.h
main.cpp
)

install(TARGETS arculator DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

