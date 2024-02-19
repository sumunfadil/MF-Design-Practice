cmake_minimum_required(VERSION 3.5)

project(BinModelApp
    VERSION 1.0
    DESCRIPTION "Binomial model"
    LANGUAGES CXX)

# Target
add_executable(BinModelApp TestBinModel.cpp
        src/BinModel01.cpp)

target_compile_features(BinModelApp PRIVATE cxx_std_20)

target_include_directories(BinModelApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)