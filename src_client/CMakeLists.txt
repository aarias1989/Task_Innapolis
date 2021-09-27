cmake_minimum_required(VERSION 2.4)

project(test_client)

FILE(GLOB PROJECT_SRC_DIR "src/*.cpp")
add_executable(test_client ${PROJECT_SRC_DIR})
