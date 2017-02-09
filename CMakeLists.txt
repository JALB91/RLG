cmake_minimum_required(VERSION 2.8)
project(RLG)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})

set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -lncurses")
set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wall -lncurses")

add_executable(main ${SOURCES})
target_link_libraries(main ${CURSES_LIBRARIES})

set_property(TARGET main PROPERTY CXX_STANDARD 11)
set_property(TARGET main PROPERTY CXX_STANDARD_REQUIRED ON)
