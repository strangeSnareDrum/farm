#include "cat.h"
#include <gtest/gtest.h>

TEST(Test_Cat can_be_created) {
    Cat myCat("misse");
    ASSERT_NO_THROW();
}