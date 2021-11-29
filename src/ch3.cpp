#include "ch3.h"
#include <iostream>
const int NumInchesInFeet = 12;
const float NumMetersInInches = 0.0254;
const float NumPoundsInKg = 2.2;
const int NumSecondsInArc = 60;
const int NumArcInDegree = 60;

void ConvertInchesToFeet()
{
    std::cout << "Please enter your height in inches:";
    int inches;
    std::cin >> inches;
    int feet = inches / NumInchesInFeet;
    inches = inches % NumInchesInFeet;
    std::cout << "your height is :" << feet << " feet and " << inches << " inches" << std::endl;
}

float ConvertHeightToInches(const int &feet, const int &inches)
{
    return feet * NumInchesInFeet + inches;
}

float ConvertInchesToMeters(const int &inches)
{
    return inches * NumMetersInInches;
}

float ConvertPoundsToKg(const float &pounds)
{
    return pounds / NumPoundsInKg;
}

float CalculateBMI(const float &weight_in_kg, const float &height_in_meters)
{
    return weight_in_kg / height_in_meters / height_in_meters;
}

float ConvertMinutesToDegree(const float &arc)
{
    return arc / NumArcInDegree;
}
float ConvertSecondsToMinutes(const float &seconds)
{
    return seconds / NumSecondsInArc;
}
int main()
{
    // ConvertInchesToFeet();
    // float feet, inches, weight_in_pounds;
    // std::cout << "Please enter your height in feet";
    // std::cin >> feet;
    // std::cout << "Please enter your height in inches";
    // std::cin >> inches;
    // std::cout << "Please enter your weight in pounds";
    // std::cin >> weight_in_pounds;
    // std::cout << "your BMI is: " << CalculateBMI(ConvertPoundsToKg(weight_in_pounds), ConvertInchesToMeters(ConvertHeightToInches(feet, inches))) << std::endl;
    float degrees, minutes, seconds;
    std::cout << "Enter a latitude in degrees,minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees:";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc:";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc:";
    std::cin >> seconds;
    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + ConvertMinutesToDegree(minutes + ConvertSecondsToMinutes(seconds)) << " degrees" << std::endl;
}