cmake_minimum_required(VERSION 2.8)
project(jalb)

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR} include)

set(JALB_SOURCES 
    src/Node.cpp
    src/Director.cpp
    src/Pos.cpp
    src/Size.cpp
    src/Utils.cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -lncurses")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wall -lncurses")

add_library(jalb ${JALB_SOURCES})
target_link_libraries(jalb ${CURSES_LIBRARIES})

set_property(TARGET jalb PROPERTY CXX_STANDARD 11)
set_property(TARGET jalb PROPERTY CXX_STANDARD_REQUIRED ON)
