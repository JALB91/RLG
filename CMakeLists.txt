cmake_minimum_required(VERSION 2.8)
project(RLG)

add_subdirectory(jalb)

include_directories(include jalb)

set(SOURCES
	src/GameScene.cpp
    src/Map.cpp
    src/GameManager.cpp
    src/main.cpp
    src/Player.cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -lncurses")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wall -lncurses")

add_executable(main ${SOURCES})
target_link_libraries(main jalb)

set_property(TARGET main PROPERTY CXX_STANDARD 11)
set_property(TARGET main PROPERTY CXX_STANDARD_REQUIRED ON)
