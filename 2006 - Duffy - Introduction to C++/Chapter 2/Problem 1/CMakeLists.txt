cmake_minimum_required(VERSION 3.5)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(TestInequalitiesBinary TestInequalities.cpp ${SRC_FILES})
target_include_directories(TestInequalitiesBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


target_compile_features(HelloAppBinary PRIVATE cxx_std_20)