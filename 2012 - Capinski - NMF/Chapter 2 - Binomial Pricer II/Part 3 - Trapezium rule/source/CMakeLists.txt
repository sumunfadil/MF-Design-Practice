cmake_minimum_required(VERSION 3.5)

project(IntegralApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(IntegralApp Main091.cpp
        src/integral.cpp)

target_compile_features(IntegralApp PRIVATE cxx_std_20)

target_include_directories(IntegralApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)