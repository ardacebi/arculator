cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(arculator VERSION 1.0)

add_executable(arculator
src/partials/intro.cpp
src/partials/intro.h
src/partials/menu.cpp
src/partials/menu.h
src/partials/invalidinput.cpp
src/partials/invalidinput.h
src/partials/programs/angle.cpp
src/partials/programs/angle.h
src/partials/programs/area.cpp
src/partials/programs/area.h
src/partials/programs/data.cpp
src/partials/programs/data.h
src/partials/programs/energy.cpp
src/partials/programs/energy.h
src/partials/programs/length.cpp
src/partials/programs/length.h
src/partials/programs/power.cpp
src/partials/programs/power.h
src/partials/programs/pressure.cpp
src/partials/programs/pressure.h
src/partials/programs/speed.cpp
src/partials/programs/speed.h
src/partials/programs/temperature.cpp
src/partials/programs/temperature.h
src/partials/programs/time.cpp
src/partials/programs/time.h
src/partials/programs/volume.cpp
src/partials/programs/volume.h
src/partials/programs/weight.cpp
src/partials/programs/weight.h
src/arculator.cpp
)

install(TARGETS arculator DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

