add_library(cat src/cat.cpp)
target_include_directories(cat PUBLIC src)

add_executable(test_prog_cat test/testCat.cpp)
target_link_libraries(test_prog_cat cat gtest)
add_test(NAME test_cat COMMAND test_prog_cat)