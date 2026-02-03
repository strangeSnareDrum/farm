cmake_minimum_required(VERSION 3.12)
project(farm LANGUAGE CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent) # A cmake module which can fetch content

FetchContent_Declare(
    gtest
    GIT_REPOSITORY https://github.com/google/googletest.git
)

FetchContent_MakeAvailable(gtest)

add_subdirectory(cat)

add_executable(farm main.cpp)
target_link_libraries(farm cat)
