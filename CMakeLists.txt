cmake_minimum_required(VERSION 3.12)
project(farm)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent) # A cmake module which can fetch content

FetchContent_Declare(
    gtest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.17.0
)

FetchContent_MakeAvailable(gtest)

add_subdirectory(src/cat)

add_executable(farm src/main.cpp)
target_link_libraries(farm cat)
