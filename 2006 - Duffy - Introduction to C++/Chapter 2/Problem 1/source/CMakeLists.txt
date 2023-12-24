cmake_minimum_required(VERSION 3.5)

project(TestInequalitiesApp
        VERSION 1.0
        DESCRIPTION "Min and Max functions"
        LANGUAGES CXX)

# Target
add_executable(TestInequalitiesBinary TestInequalities.cpp
                src/Inequalities.cpp)

# Alternative
# file(GLOB_RECURSE SRC_FILES src/*.cpp)
# add_executable(TestInequalitiesBinary TestInequalities.cpp ${SRC_FILES})

target_compile_features(TestInequalitiesBinary PRIVATE cxx_std_20)

target_include_directories(TestInequalitiesBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


