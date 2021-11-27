#include <iostream>
#include "ch2.h"

int Exercise_1(const std::string &your_name, const std::string &your_address)
{
    std::cout << "your name is: " << your_name << ". your address is:" << your_address << "." << std::endl;
    return 1;
}

int main()
{
    Exercise_1("shanghai", "shanghai fengxian");
}