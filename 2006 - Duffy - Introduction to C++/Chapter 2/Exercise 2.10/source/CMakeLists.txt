cmake_minimum_required(VERSION 3.5)

project(TestSumsApp
        VERSION 1.0
        DESCRIPTION "Sum functions"
        LANGUAGES CXX)

# Target
add_executable(TestSumsBinary TestSums.cpp
                src/Sums.cpp)

target_compile_features(TestSumsBinary PRIVATE cxx_std_20)

target_include_directories(TestSumsBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


