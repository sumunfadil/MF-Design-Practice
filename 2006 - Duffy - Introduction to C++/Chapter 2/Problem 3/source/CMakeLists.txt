cmake_minimum_required(VERSION 3.5)

project(TestGenericInequalitiesApp
        VERSION 1.0
        DESCRIPTION "Min and Max functions for generic data"
        LANGUAGES CXX)

# Target
add_executable(TestGenericInequalitiesBinary TestGenericInequalities.cpp
                src/GenericInequalities.cpp)

target_compile_features(TestGenericInequalitiesBinary PRIVATE cxx_std_20)

target_include_directories(TestGenericInequalitiesBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
