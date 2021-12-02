#ifndef CH3_H
#define CH3_H
#include <iostream>
namespace ch3
{

    const int NumInchesInFeet = 12;
    const float NumMetersInInches = 0.0254;
    const float NumPoundsInKg = 2.2;
    const int NumSecondsInArc = 60;
    const int NumArcInDegree = 60;

    void ConvertInchesToFeet();

    float ConvertHeightToInches(const int &feet, const int &inches);

    float ConvertInchesToMeters(const int &inches);

    float ConvertPoundsToKg(const float &pounds);

    float CalculateBMI(const float &weight_in_kg, const float &height_in_meters);

    float ConvertMinutesToDegree(const float &arc);
    float ConvertSecondsToMinutes(const float &seconds);

    class exercise
    {
    public:
        virtual void Initial() = 0;
        virtual void DoExercise() = 0;
        virtual void Output() = 0;
    };

    class exercise_4 : public exercise
    {
    public:
        exercise_4()
        {
            Initial();
            DoExercise();
            Output();
            std::cout << "Exercise 4 is done." << std::endl;
        };
        void Initial();
        void DoExercise();
        void Output();

    private:
        long total_;
        int seconds_;
        int minutes_;
        int hours_;
        int days_;
        const int NumHoursInDay = 24;
        const int NumMinutesInHour = 60;
        const int NumSecondsInMinute = 60;
    };
    class exercise_5 : public exercise
    {
    public:
        exercise_5()
        {
            Initial();
            DoExercise();
            Output();
            std::cout << "Exercise 5 is done." << std::endl;
        };
        void Initial();
        void DoExercise();
        void Output();

    private:
        long long world_population_;
        long long us_population_;
        float percentage_;
    };
    class exercise_6 : public exercise
    {
    public:
        exercise_6()
        {
            Initial();
            DoExercise();
            Output();
            std::cout << "Exercise 6 is done." << std::endl;
        };
        void Initial();
        void DoExercise();
        void Output();

    private:
        long long miles_driven_;
        long long gasline_used_;
        float mile_per_gallon_;
    };
    class exercise_7 : public exercise
    {
    public:
        exercise_7()
        {
            Initial();
            DoExercise();
            Output();
            std::cout << "Exercise 7 is done." << std::endl;
        };
        void Initial();
        void DoExercise();
        void Output();

    private:
        float liters_per_100_km_;
        float mile_per_gallon_;
        const float NumMilesIn100Km_ = 62.14;
        const float NumLitersInGallon = 3.875;
    };
}
#endif