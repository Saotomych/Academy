#include <iostream>
#include "happy_number.hpp"

int main()
{
    int num;
    std::cin >> num;

    bool happy = isHappy(num);

    if (happy)
    {
        std::cout << "Number is happy" << std::endl;
    }
    else
    {
        std::cout << "Number is not happy" << std::endl;
    }

    return 0;
}