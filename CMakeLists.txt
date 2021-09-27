cmake_minimum_required(VERSION 2.4)

project(test_client)

FILE(GLOB PROJECT_SRC_DIR_CLIENT "src_client/*.cpp")
FILE(GLOB PROJECT_SRC_DIR_SERVER "src_server/*.cpp")
add_executable(test_client ${PROJECT_SRC_DIR_CLIENT})
add_executable(test_server ${PROJECT_SRC_DIR_SERVER})
