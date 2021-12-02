#ifndef CH5_H
#define CH5_H

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
}

#endif