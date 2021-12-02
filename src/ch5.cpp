#include "ch5.h"
#include <iostream>

void ch5::exercise_1::Initial()
{
    std::cout << "Please enter the small number: " << std::endl;
    std::cin >> small_;
    std::cout << "Please enter the big number: " << std::endl;
    std::cin >> big_;
}
void ch5::exercise_1::Initial(const int &small, const int &big)
{
    small_ = small;
    big_ = big;
}

void ch5::exercise_1::DoExercise()
{
    for (int i = small_; i <= big_; ++i)
    {
        result_ = result_ + i;
    }
}

void ch5::exercise_1::Output()
{
    std::cout << "ch5 exercise_1 result is: " << result_ << std::endl;
}
