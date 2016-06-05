cmake_minimum_required(VERSION 2.8.11)

include(gtest.cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_library(YAML yaml-cpp)

file(GLOB test_src "tests/*.cpp")
add_executable(run_tests ${test_src})
target_include_directories(run_tests PUBLIC src/ PUBLIC ${GTEST_INCLUDE_DIR})
target_link_libraries(run_tests ${GTEST_LIBRARY_PATH} ${GTEST_MAIN_LIBRARY_PATH} ${YAML} pthread)
