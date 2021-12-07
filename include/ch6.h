#ifndef CH6_H
#define CH6_H
#include <iostream>
#include <cctype>
namespace ch6
{
    class exercise_1
    {
    public:
        exercise_1(std::istream &std_input)
        {
            DoExercise(std_input);
        };
        void DoExercise(std::istream &std_input);
        char OutputChar();

    private:
        char input_ch_;
        char output_ch_;
    };
}
#endif