#include <gtest/gtest.h>
#include "ch6.h"
#include <string>
#include <iostream>
#include <sstream>
// TEST(ch5, exercise_1)
// {
//     ch5::exercise_1 ex1(2, 9);
//     EXPECT_EQ(ex1.result_, 44);
// }

// TEST(ch5, exercise_2)
// {
//     ch5::exercise_2 ex;
//     EXPECT_EQ(ex.factorials_[0], 1);
//     EXPECT_EQ(ex.factorials_[1], 1);
//     EXPECT_EQ(ex.factorials_[6], 720);
//     EXPECT_EQ(ex.factorials_[14], 87178291200);
// }

// TEST(ch5, exercise_3)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 0
//     std::string test_input = "22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n0\n";
//     // int expected = 22 + 22 + 22 + 22 + 3 + 3 + 3 + 2 - 6 - 6 - 6;
//     int expected = 0;
//     std::stringstream fake_input(test_input);
//     std::string segment;

//     while (std::getline(fake_input, segment))
//     {
//         expected += std::stoi(segment);
//         std::cout << "expected: " << expected << std::endl;
//     }
//     std::stringstream fake_input_1(test_input);
//     ch5::exercise_3 ex(fake_input_1);

//     int actual = ex.sum_;
//     EXPECT_EQ(expected, actual);
// }

// TEST(ch5, exercise_4)
// {

//     ch5::exercise_4 ex;

//     EXPECT_GT(ex.GetCleoBalance(), ex.GetDaphnebalance());
// }

// TEST(ch5, exercise_5)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 1
//     std::string test_input = "22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n";
//     // int expected = 22 + 22 + 22 + 22 + 3 + 3 + 3 + 2 - 6 - 6 - 6;
//     int expected = 0;
//     std::stringstream fake_input(test_input);
//     std::string segment;

//     while (std::getline(fake_input, segment))
//     {
//         expected += std::stoi(segment);
//         std::cout << "expected: " << expected << std::endl;
//     }
//     std::stringstream fake_input_1(test_input);
//     ch5::exercise_5 ex(fake_input_1);

//     int actual = ex.GetTotalSales();
//     EXPECT_EQ(expected, actual);
// }
// TEST(ch5, exercise_6)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 1
//     std::string test_input = "22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n";
//     int expected = 0;
//     std::stringstream fake_input(test_input);
//     std::string segment;

//     while (std::getline(fake_input, segment))
//     {
//         expected += std::stoi(segment);
//         std::cout << "expected: " << expected << std::endl;
//     }
//     std::stringstream fake_input_1(test_input);
//     ch5::exercise_6 ex(fake_input_1);

//     int actual = ex.GetTotalSales();
//     EXPECT_EQ(expected, actual);
// }
// TEST(ch5, exercise_7)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 1
//     std::string test_input = "2\nHudson Hornet\n1952\nKaiser\n1951\n";
//     int expected = 1951;
//     std::stringstream fake_input(test_input);
//     ch5::exercise_7 ex(fake_input);

//     int actual = ex.GetCarList()[0].year_made;
//     EXPECT_EQ(expected, actual);
// }
// TEST(ch5, exercise_8)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 1
//     std::string test_input = "2\nHudson Hornet\n1952\nKaiser\n1951\n123\n1235\ndone\n";
//     int expected = 7;
//     std::stringstream fake_input(test_input);
//     ch5::exercise_8 ex(fake_input);

//     int actual = ex.GetWordsCount();
//     EXPECT_EQ(expected, actual);
// }
// TEST(ch5, exercise_9)
// {
//     //for input: 22 22 22 22 3 3 3 2 -6 -6 -6 1
//     std::string test_input = "2\nHudson Hornet\n1952\nKaiser\n1951\n123\n1235\ndone\n";
//     int expected = 7;
//     std::stringstream fake_input(test_input);
//     ch5::exercise_9 ex(fake_input);

//     int actual = ex.GetWordsCount();
//     EXPECT_EQ(expected, actual);
// }

TEST(ch6, exercise_1)
{
    std::string test_input = "2\nH\nu\n";
    char output_1 = 'h';
    char output_2 = 'U';
    std::stringstream fake_input(test_input);
    ch6::exercise_1 ex(fake_input);
    EXPECT_EQ(output_2, ex.OutputChar());
}