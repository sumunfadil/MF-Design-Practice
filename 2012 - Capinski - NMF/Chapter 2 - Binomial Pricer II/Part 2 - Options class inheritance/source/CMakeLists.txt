cmake_minimum_required(VERSION 3.5)

project(OptionsClassApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(OptionsClassApp Main09.cpp
        src/BinModel02.cpp src/Options05.cpp)

target_compile_features(OptionsClassApp PRIVATE cxx_std_20)

target_include_directories(OptionsClassApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)