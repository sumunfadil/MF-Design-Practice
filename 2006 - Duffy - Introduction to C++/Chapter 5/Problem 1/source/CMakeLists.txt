cmake_minimum_required(VERSION 3.5)

project(TestOperatorOverloadApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(TestOperatorOverloadBinary TestOperatorOverload.cpp
        src/datasimdate.cpp)

target_compile_features(TestOperatorOverloadBinary PRIVATE cxx_std_20)

target_include_directories(TestOperatorOverloadBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)