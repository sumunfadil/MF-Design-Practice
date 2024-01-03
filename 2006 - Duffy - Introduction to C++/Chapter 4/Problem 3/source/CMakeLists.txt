cmake_minimum_required(VERSION 3.5)

project(TestPointApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(TestPointBinary TestPoint.cpp
        src/Points.cpp)

target_compile_features(TestPointBinary PRIVATE cxx_std_20)

target_include_directories(TestPointBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)