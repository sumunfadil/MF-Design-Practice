cmake_minimum_required(VERSION 3.5)

project(TestGetStringApp
        VERSION 1.0
        DESCRIPTION "Min and Max functions for generic data"
        LANGUAGES CXX)

# Target
add_executable(TestGetStringBinary TestGetString.cpp
                src/GetString.cpp)

target_compile_features(TestGetStringBinary PRIVATE cxx_std_20)

target_include_directories(TestGetStringBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)