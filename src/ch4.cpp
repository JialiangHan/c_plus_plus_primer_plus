#include <iostream>
#include "ch4.h"
#include <random>
#include <stdlib.h>
#include <algorithm>
#include <array>
namespace ch4
{
    void exercise_1::Inital()
    {
        std::cout << "What is your first name?";
        std::cin >> first_name_;
        std::cout << "What is your last name?";
        std::cin >> last_name_;
        std::cout << "What letter grade do you deserve?";
        std::cin >> grade_;
        std::cout << "What is your age?";
        std::cin >> age_;
    }
    void exercise_1::OutputInfo()
    {
        std::cout << "Name: " << last_name_ << ", " << first_name_ << std::endl;
        std::cout << "Grade: " << grade_ << std::endl;
        std::cout << "Age: " << age_ << std::endl;
    }
    void exercise_2::Inital()
    {
        std::cout << "Enter your name:\n";
        std::getline(std::cin, name);
        std::cout << "Enter your favourite dessert:\n";
        std::getline(std::cin, dessert);
    }
    void exercise_2::OutputInfo()
    {
        std::cout << "I have some delicious " << dessert;
        std::cout << " for you, " << name << ".\n";
    }
    void exercise_3::Inital()
    {
        std::cout << "Enter your first name: \n";
        std::cin.getline(first_name_, 50);
        std::cout << "Enter your last name: \n";
        std::cin.getline(last_name_, 50);
    }
    void exercise_3::OutputInfo()
    {
        strcat(last_name_, ",");
        strcat(last_name_, first_name_);
        std::cout << "Here`s the information in a single string: " << last_name_ << ".\n";
    }
    void exercise_4::Inital()
    {
        std::cout << "Enter your first name: \n";
        std::getline(std::cin, first_name_);
        std::cout << "Enter your last name: \n";
        std::getline(std::cin, last_name_);
    }
    void exercise_4::OutputInfo()
    {
        full_name_ = last_name_ + ", " + first_name_;
        std::cout << "Here`s the information in a single string: " << full_name_ << ".\n";
    }
    void exercise_5::Inital()
    {
    }
    void exercise_5::OutputInfo()
    {
        std::cout << "snack brand: " << snack.brand << ".\n";
    }
    void exercise_6::Inital()
    {
        std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

        std::random_device rd;

        for (auto &snack : snacks_)
        {
            std::mt19937 generator(rd());

            std::shuffle(str.begin(), str.end(), generator);
            snack.brand = str.substr(0, 5);
            snack.weight = rand() / 100.0;
            snack.calories = rand();
        }
    }
    void exercise_6::OutputInfo()
    {
        for (const auto &snack : snacks_)
        {
            std::cout << "snack brand: " << snack.brand << ".\n";
            std::cout << "snack weight: " << snack.weight << ".\n";
            std::cout << "snack callories: " << snack.calories << ".\n";
        }
    }
    void exercise_7::Inital()
    {
        std::cout << "Enter pizza company name: \n";
        std::getline(std::cin, pizza_.company_name);
        std::cout << "Enter pizza diameter: \n";
        std::cin >> pizza_.diameter;
        std::cout << "Enter pizza weight: \n";
        std::cin >> pizza_.weight;
    }
    void exercise_7::OutputInfo()
    {
        std::cout << "pizza brand: " << pizza_.company_name << ".\n";
        std::cout << "pizza diameter: " << pizza_.diameter << ".\n";
        std::cout << "pizza weight: " << pizza_.weight << ".\n";
    }
    void exercise_8()
    {
        Pizza *ptr = new Pizza;
        std::cout << "Enter pizza diameter: \n";
        std::cin >> ptr->diameter;
        //to get rid of newline symbol, detail can be found in p131.
        std::cin.get();
        std::cout << "Enter pizza company name: \n";
        std::getline(std::cin, ptr->company_name);
        std::cout << "Enter pizza weight: \n";
        std::cin >> ptr->weight;

        std::cout << "pizza brand: " << ptr->company_name << ".\n";
        std::cout << "pizza diameter: " << ptr->diameter << ".\n";
        std::cout << "pizza weight: " << ptr->weight << ".\n";
        delete ptr;
    }
    void exercise_9()
    {
        std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

        std::random_device rd;
        int size;
        std::cout << "Please enter the candy bar size.\n";
        std::cin >> size;
        CandyBar *ptr = new CandyBar[size];
        for (int i = 0; i < size; ++i)
        {
            std::mt19937 generator(rd());

            std::shuffle(str.begin(), str.end(), generator);
            ptr[i].brand = str.substr(0, 5);
            ptr[i].weight = rand() / 100.0;
            ptr[i].calories = rand();
        }

        for (int i = 0; i < size; ++i)
        {
            std::cout << "snack brand: " << ptr[i].brand << ".\n";
            std::cout << "snack weight: " << ptr[i].weight << ".\n";
            std::cout << "snack callories: " << ptr[i].calories << ".\n";
        }
        delete[] ptr;
    }
    void exercise_10()
    {
        std::array<float, 3> meters;
        std::cout << "Please enter three times meters\n. 1:";
        std::cin >> meters[0];
        std::cout << "2:";
        std::cin >> meters[1];
        std::cout << "3:";
        std::cin >> meters[2];
        for (const auto &meter : meters)
        {
            std::cout << "meter entered is: " << meter << std::endl;
        }
        std::cout << "average meter is: " << (meters[0] + meters[1] + meters[2]) / 3 << std::endl;
    }
}

int main()
{
    // ch4::exercise_7 ex7;
    // ex7.Inital();
    // ex7.OutputInfo();
    ch4::exercise_10();
}
