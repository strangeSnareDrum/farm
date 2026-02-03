add_library(cat cat.cpp)
target_include_directories(cat PUBLIC .)

if (BUILD_UNIT_TESTS)
    add_executable(test_prog_cat test/testCat.cpp)
    target_link_libraries(test_prog_cat cat gtest_main)
    add_test(NAME test_cat COMMAND test_prog_cat)
endif()