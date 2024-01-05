cmake_minimum_required(VERSION 3.5)

project(TestLineSegmentApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(TestLineSegmentBinary TestLineSegment.cpp
        src/Point.cpp src/LineSegment.cpp)

target_compile_features(TestLineSegmentBinary PRIVATE cxx_std_20)

target_include_directories(TestLineSegmentBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)