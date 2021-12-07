#include "ch6.h"
#include <cctype>
namespace ch6
{
    void exercise_1::DoExercise(std::istream &std_input)
    {
        std::cout << " Enter text for analysis, and type @ to terminate input.\n";
        std_input >> input_ch_;
        while (input_ch_ != '@')
        {
            if (!std::isdigit(input_ch_))
            {
                if (std::isupper(input_ch_))
                {
                    output_ch_ = std::tolower(input_ch_);
                }
                if (std::islower(input_ch_))
                {
                    output_ch_ = std::toupper(input_ch_);
                }
            }
            std_input >> input_ch_;
        }
    }
    char exercise_1::OutputChar()
    {
        return output_ch_;
    }
}