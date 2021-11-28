#include <iostream>
#include "ch2.h"

int Exercise_1(const std::string &your_name, const std::string &your_address)
{
    std::cout << "your name is: " << your_name << ". your address is:" << your_address << "." << std::endl;
    return 1;
}

void ConvertFurlongsToYards()
{
    float furlongs;
    float yards;
    std::cout << "Please input a distance in furlongs" << std::endl;
    std::cin >> furlongs;
    yards = furlongs * 220;
    std::cout << "distance in yards is: " << yards << std::endl;
}

void OutputString()
{

    std::cout << "Three blind mice" << std::endl;
}
void OutputString1()
{

    std::cout << "See how they run" << std::endl;
}

void Exercise_3()
{
    OutputString();
    OutputString();
    OutputString1();
    OutputString1();
}
void ConverAgeToMonth()
{
    std::cout << "Enter your age:";
    int age;
    std::cin >> age;
    std::cout << "Your age in months is " << age * 12 << std::endl;
}

float ConvertCelsiusToFahrenheit(const float &temp_in_Celsius)
{
    return temp_in_Celsius * 1.8 + 32.0;
}

float ConvertLightYearsToAstronomicalUnits(const float &light_years)
{
    return light_years * 63240;
}

void DisplayHoursAndMinutes(const int &hours, const int &minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
int main()
{
    // Exercise_1("shanghai", "shanghai fengxian");
    // ConvertFurlongsToYards();
    // Exercise_3();
    // ConverAgeToMonth();
    // std::cout << "Please enter a Celsius value:";
    // float temp_in_celsius;
    // std::cin >> temp_in_celsius;
    // std::cout << temp_in_celsius << " degrees Celsius is " << ConvertCelsiusToFahrenheit(temp_in_celsius) << " degrees Fahrenheit" << std::endl;
    // std::cout << "Enter the number of light years: ";
    // float light_years;
    // std::cin >> light_years;
    // std::cout << light_years << " light years = " << ConvertLightYearsToAstronomicalUnits(light_years) << " astronomical units" << std::endl;
    std::cout << "Enter the number of hours: ";
    float hours;
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    float minutes;
    std::cin >> minutes;
    DisplayHoursAndMinutes(hours, minutes);
}