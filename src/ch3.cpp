#include "ch3.h"

void ch3::ConvertInchesToFeet()
{
    std::cout << "Enter your height in integer inches: ___\b\b\b";
    int inches;
    std::cin >> inches;
    int feet = inches / NumInchesInFeet;
    inches = inches % NumInchesInFeet;
    std::cout << "your height is :" << feet << " feet and " << inches << " inches" << std::endl;
}

float ch3::ConvertHeightToInches(const int &feet, const int &inches)
{
    return feet * NumInchesInFeet + inches;
}

float ch3::ConvertInchesToMeters(const int &inches)
{
    return inches * NumMetersInInches;
}

float ch3::ConvertPoundsToKg(const float &pounds)
{
    return pounds / NumPoundsInKg;
}

float ch3::CalculateBMI(const float &weight_in_kg, const float &height_in_meters)
{
    return weight_in_kg / height_in_meters / height_in_meters;
}

float ch3::ConvertMinutesToDegree(const float &arc)
{
    return arc / NumArcInDegree;
}
float ch3::ConvertSecondsToMinutes(const float &seconds)
{
    return seconds / NumSecondsInArc;
}

void ch3::exercise_4::Initial()
{
    std::cout << "Enter the number of secondes: ___\b\b\b";
    std::cin >> total_;
}

void ch3::exercise_4::DoExercise()
{
    days_ = total_ / NumSecondsInMinute / NumMinutesInHour / NumHoursInDay;
    hours_ = total_ / NumSecondsInMinute / NumMinutesInHour % NumHoursInDay;
    minutes_ = total_ / NumSecondsInMinute % NumMinutesInHour;
    seconds_ = total_ % NumSecondsInMinute;
}

void ch3::exercise_4::Output()
{
    std::cout << total_ << " seconds = " << days_ << " days, " << hours_ << " hours, " << minutes_ << " minutes, " << seconds_ << " seconds." << std::endl;
}

void ch3::exercise_5::Initial()
{
    std::cout << "Enter world population: ___\b\b\b";
    std::cin >> world_population_;
    std::cout << "Enter us population: ___\b\b\b";
    std::cin >> us_population_;
}

void ch3::exercise_5::DoExercise()
{

    percentage_ = (float)us_population_ / world_population_ * 100;
}

void ch3::exercise_5::Output()
{
    std::cout << "teh population of the US is " << percentage_ << "% of the world population." << std::endl;
}
void ch3::exercise_6::Initial()
{
    std::cout << "Enter the number of mils you have driven: ___\b\b\b";
    std::cin >> miles_driven_;
    std::cout << "Enter the number of gasline you have used: ___\b\b\b";
    std::cin >> gasline_used_;
}

void ch3::exercise_6::DoExercise()
{

    mile_per_gallon_ = (float)miles_driven_ / gasline_used_;
}

void ch3::exercise_6::Output()
{
    std::cout << "mile per gallon is " << mile_per_gallon_ << std::endl;
}

void ch3::exercise_7::Initial()
{
    std::cout << "Enter the number of liters per 100 kilometers: ___\b\b\b";
    std::cin >> liters_per_100_km_;
}

void ch3::exercise_7::DoExercise()
{

    mile_per_gallon_ = 1 * NumMilesIn100Km_ / (liters_per_100_km_ / NumLitersInGallon);
}

void ch3::exercise_7::Output()
{
    std::cout << "mile per gallon is " << mile_per_gallon_ << std::endl;
}

// int main()
// {
// ConvertInchesToFeet();
// float feet, inches, weight_in_pounds;
// std::cout << "Please enter your height in feet";
// std::cin >> feet;
// std::cout << "Please enter your height in inches";
// std::cin >> inches;
// std::cout << "Please enter your weight in pounds";
// std::cin >> weight_in_pounds;
// std::cout << "your BMI is: " << CalculateBMI(ConvertPoundsToKg(weight_in_pounds), ConvertInchesToMeters(ConvertHeightToInches(feet, inches))) << std::endl;
// float degrees, minutes, seconds;
// std::cout << "Enter a latitude in degrees,minutes, and seconds:" << std::endl;
// std::cout << "First, enter the degrees:";
// std::cin >> degrees;
// std::cout << "Next, enter the minutes of arc:";
// std::cin >> minutes;
// std::cout << "Finally, enter the seconds of arc:";
// std::cin >> seconds;
// std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + ConvertMinutesToDegree(minutes + ConvertSecondsToMinutes(seconds)) << " degrees" << std::endl;
// ch3::exercise_7 ex7;
// }