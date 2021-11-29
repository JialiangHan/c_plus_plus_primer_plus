#ifndef CH4_H
#define CH4_H
#include <string>
#include <cstring>

namespace ch4
{
    class exercise_1
    {
    public:
        void Inital();
        void OutputInfo();

    private:
        std::string first_name_;
        std::string last_name_;
        std::string grade_;
        int age_;
    };
    class exercise_2
    {
    public:
        void Inital();
        void OutputInfo();

    private:
        std::string name;
        std::string dessert;
    };
    class exercise_3
    {
    public:
        void Inital();
        void OutputInfo();

    private:
        char first_name_[50];
        char last_name_[50];
    };
    class exercise_4
    {
    public:
        void Inital();
        void OutputInfo();

    private:
        std::string first_name_;
        std::string last_name_;
        std::string full_name_;
    };
    class exercise_5
    {
    public:
        void Inital();
        void OutputInfo();
        struct CandyBar_
        {
            std::string brand;
            float weight;
            int calories;
        };

    private:
        CandyBar_ snack =
            {
                "MochaMunch",
                2.3,
                350,
        };
    };
    class exercise_6
    {
    public:
        void Inital();
        void OutputInfo();
        struct CandyBar
        {
            std::string brand;
            float weight;
            int calories;
        };

    private:
        CandyBar snacks_[3];
    };
    class exercise_7
    {
    public:
        void Inital();
        void OutputInfo();
        struct Pizza
        {
            std::string company_name;
            float diameter;
            float weight;
        };

    private:
        Pizza pizza_;
    };
    void exercise_8();
    struct Pizza
    {
        std::string company_name;
        float diameter;
        float weight;
    };
    void exercise_9();
    struct CandyBar
    {
        std::string brand;
        float weight;
        int calories;
    };
    void exercise_10();
}
#endif