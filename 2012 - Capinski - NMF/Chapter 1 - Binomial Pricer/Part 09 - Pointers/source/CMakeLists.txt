cmake_minimum_required(VERSION 3.5)

project(PointerApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(PointerApp Options02Test.cpp
        src/BinModel01.cpp src/Options02.cpp)

target_compile_features(PointerApp PRIVATE cxx_std_20)

target_include_directories(PointerApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)