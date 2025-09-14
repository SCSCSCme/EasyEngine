cmake_minimum_required(VERSION 3.12)
project(EasyEngine)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SRC_FILES src/EasyEngine.cpp src/Engine.cpp)

find_package(SDL3 REQUIRED)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-DDEBUG)
endif()

add_executable(EasyEngine ${SRC_FILES})
target_include_directories(EasyEngine PRIVATE include)
target_link_libraries(EasyEngine PRIVATE SDL3::SDL3)
