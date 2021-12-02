#include "ch5.h"
#include <string>

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

int main()
{

    std::string test_input = "22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n1\n";
    int expected = 0;
    std::stringstream fake_input(test_input);
    std::string segment;

    while (std::getline(fake_input, segment))
    {
        expected += std::stoi(segment);
        std::cout << "expected: " << expected << std::endl;
    }
    std::stringstream fake_input_1(test_input);
    ch5::exercise_6 ex(fake_input_1);
    std::cout << "result: " << ex.GetTotalSales() << "\n.";
    return 0;
}