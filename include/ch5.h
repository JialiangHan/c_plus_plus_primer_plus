#ifndef CH5_H
#define CH5_H
#include <array>
#include <iostream>
#include <sstream>
namespace ch5
{
    class exercise_1
    {
    public:
        exercise_1(const int &small, const int &big)
        {
            Initial(small, big);
            DoExercise();
            Output();
        };
        void Initial(const int &small, const int &big);
        void Initial();
        void DoExercise();
        void Output();
        int result_ = 0;

    private:
        int small_;
        int big_;
    };
    // class exercise_2
    // {
    // public:
    //     exercise_2()
    //     {
    //         DoExercise();
    //         Output();
    //     };
    //     void DoExercise();
    //     void Output();

    //     std::array<long double, 100> factorials_{};
    // };
    class exercise_3
    {
    public:
        exercise_3()
        {
            DoExercise();
        };
        exercise_3(std::istream &std_input)
        {
            DoExercise(std_input);
        };
        void DoExercise();
        void DoExercise(std::istream &std_input);
        int number_;
        int sum_ = 0;
    };
    class exercise_4
    {
    public:
        exercise_4()
        {
            DoExercise();
        };
        void DoExercise();
        int GetYears()
        {
            return number_of_years_;
        }
        float GetCleoBalance()
        {
            return Cleo_balance_;
        }
        float GetDaphnebalance()
        {
            return Daphne_balance_;
        }

    private:
        int number_of_years_ = 0;
        float Daphne_balance_ = 100;
        float Cleo_balance_ = 100;
        float simple_interest_ = 0.1;
        float compound_interest_ = 0.05;
    };
    class exercise_5
    {
    public:
        exercise_5(std::istream &std_input)
        {
            DoExercise(std_input);
        };
        void DoExercise(std::istream &std_input);
        int GetTotalSales()
        {
            return total_sales_;
        }

    private:
        int total_sales_ = 0;
        std::array<int, 12> sales_list_;
    };
    class exercise_6
    {
    public:
        exercise_6(std::istream &std_input)
        {
            DoExercise(std_input);
        };
        void DoExercise(std::istream &std_input);
        int GetTotalSales()
        {
            return total_sales_;
        };
        int GetFirstSales()
        {
            return first_year_sales_;
        };
        int GetSecondSales()
        {
            return second_year_sales_;
        };
        int GetThirdSales()
        {
            return third_year_sales_;
        };

    private:
        int total_sales_ = 0;
        std::array<std::array<int, 12>, 3> sales_list_;
        int first_year_sales_ = 0;
        int second_year_sales_ = 0;
        int third_year_sales_ = 0;
    };
    struct car
    {
        std::string make;
        int year_made;
    };
    class exercise_7
    {
    public:
        exercise_7(std::istream &std_input)
        {

            DoExercise(std_input);
        };
        ~exercise_7()
        {
            delete[] car_list_;
        };
        void DoExercise(std::istream &std_input);
        car *GetCarList()
        {
            return car_list_;
        };

    private:
        int numbers_;
        car *car_list_ = new car[numbers_];
    };
    class exercise_8
    {
    public:
        exercise_8(std::istream &std_input)
        {

            DoExercise(std_input);
        };
        ~exercise_8(){};
        void DoExercise(std::istream &std_input);
        int GetWordsCount()
        {
            return counts_;
        };

    private:
        int counts_ = 0;
        char words_list_[20];
    };
    class exercise_9
    {
    public:
        exercise_9(std::istream &std_input)
        {

            DoExercise(std_input);
        };
        ~exercise_9(){};
        void DoExercise(std::istream &std_input);
        int GetWordsCount()
        {
            return counts_;
        };

    private:
        int counts_ = 0;
        std::string word;
    };
    class exercise_10
    {
    public:
        exercise_10(std::istream &std_input)
        {
            DoExercise(std_input);
        };
        ~exercise_10(){};
        void DoExercise(std::istream &std_input);

    private:
        int number_of_lines = 0;
    };
}

#endif