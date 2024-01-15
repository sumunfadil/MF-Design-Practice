cmake_minimum_required(VERSION 3.5)

project(TestComplexApp
    VERSION 1.0
    DESCRIPTION "Complex number class"
    LANGUAGES CXX)

# Target
add_executable(ComplexBinary TestComplex.cpp
        src/Complex.cpp)

target_compile_features(ComplexBinary PRIVATE cxx_std_20)

target_include_directories(ComplexBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)