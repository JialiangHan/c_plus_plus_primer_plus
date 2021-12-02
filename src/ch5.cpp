#include "ch5.h"
#include <string>
#include <cstring>
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

// void ch5::exercise_2::DoExercise()
// {
//     factorials_[0] = factorials_[1] = 1.0L;
//     for (int i = 2; i < factorials_.size(); ++i)
//     {
//         factorials_[i] = factorials_[i - 1] * i;
//     }
// }

// void ch5::exercise_2::Output()
// {
//     for (int i = 0; i < 100; i++)
//         std::cout << i << "! = " << factorials_[i] << std::endl;
// }

void ch5::exercise_3::DoExercise()
{
    std::cout << "Please enter a number( 0 is the stop sign):" << std::endl;
    std::cin >> number_;
    while (number_ != 0)
    {
        std::cout << "the sum is :" << (sum_ += number_) << std::endl;
        std::cin >> number_;
    }
}

void ch5::exercise_3::DoExercise(std::istream &std_input)
{
    std::cout << "Please enter a number( 0 is the stop sign):" << std::endl;
    std_input >> number_;
    while (number_ != 0)
    {
        std::cout << "the sum is :" << (sum_ += number_) << std::endl;
        std_input >> number_;
    }
}
void ch5::exercise_4::DoExercise()
{
    while (Daphne_balance_ >= Cleo_balance_)
    {
        number_of_years_++;
        Daphne_balance_ += simple_interest_ * 100 * number_of_years_;
        Cleo_balance_ += Cleo_balance_ * compound_interest_;
    }
}

void ch5::exercise_5::DoExercise(std::istream &std_input)
{
    for (uint i = 0; i < sales_list_.size(); ++i)
    {
        std::cout << "Please enter the " << (i + 1) << "th month sales" << std::endl;
        std_input >> sales_list_[i];
        total_sales_ += sales_list_[i];
    }
}
void ch5::exercise_6::DoExercise(std::istream &std_input)
{
    // std::cout << sales_list_.size() << "\n.";
    // std::cout << sales_list_[0].size() << "\n.";
    for (uint i = 0; i < sales_list_.size(); i++)
    {
        for (uint j = 0; j < sales_list_[i].size(); j++)
        {
            std::cout << "Please enter the " << (i + 1) << "th year " << (j + 1) << "th month sales" << std::endl;
            std_input >> sales_list_[i][j];
            std::cout << "input sales: " << sales_list_[i][j] << "\n.";
            if (i == 0)
            {
                first_year_sales_ += sales_list_[i][j];
            }
            else if (i == 1)
            {
                second_year_sales_ += sales_list_[i][j];
            }
            else if (i == 2)
            {
                third_year_sales_ += sales_list_[i][j];
            }
        }
        // ;
        // std::cout << "i = " << i << ".\n";

        // if (i >= 1)
        // {
        //     break;
        // }
    }
    total_sales_ = first_year_sales_ + second_year_sales_ + third_year_sales_;
}

void ch5::exercise_7::DoExercise(std::istream &std_input)
{
    std::cout << "How many cars do you wish to catalog? \n";
    std_input >> numbers_;
    for (uint i = 0; i < numbers_; ++i)
    {
        std::cout << "Car #" << i << ".\n";
        std::cout << "Please enter the make:\n";
        std_input >> car_list_[i].make;
        std::cout << "Please enter the year made:\n";
        std_input >> car_list_[i].year_made;
    }
    std::cout << "Here is your collection:\n";
    for (uint i = 0; i < numbers_; ++i)
    {
        std::cout << car_list_[i].year_made << " " << car_list_[i].make << "\n";
    }
}

void ch5::exercise_8::DoExercise(std::istream &std_input)
{
    std::cout << "Enter words (to stop, type the word done): \n";
    std_input >> words_list_;
    while (strcmp(words_list_, "done"))
    {
        counts_++;
        std_input >> words_list_;
    }
    std::cout << "You entered a total of " << counts_ << " words.\n";
}
void ch5::exercise_9::DoExercise(std::istream &std_input)
{
    std::cout << "Enter words (to stop, type the word done): \n";
    std_input >> word;
    while (word.compare("done"))
    {
        counts_++;
        std_input >> word;
    }
    std::cout << "You entered a total of " << counts_ << " words.\n";
}
void ch5::exercise_10::DoExercise(std::istream &std_input)
{
    std::cout << "Enter the number of lines: \n";
    std_input >> number_of_lines;
    for (int i = 0; i < number_of_lines; ++i)
    {
        for (int a = 0; a < number_of_lines - i - 1; ++a)
        {
            std::cout << ".";
        }
        for (int b = 0; b < i + 1; ++b)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
int main()
{

    std::string test_input = "5\n";

    std::stringstream fake_input_1(test_input);
    ch5::exercise_10 ex(fake_input_1);

    return 0;
}