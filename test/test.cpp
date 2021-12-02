#include <gtest/gtest.h>
#include "ch5.h"

TEST(ch5, exercise_1)
{
    ch5::exercise_1 ex1(2, 9);
    EXPECT_EQ(ex1.result_, 44);
}

// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }