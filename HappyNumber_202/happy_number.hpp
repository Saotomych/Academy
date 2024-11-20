#pragma once

#include <unordered_set>

bool isHappy(int n)
{
    std::unordered_set<int> numbers;

        while (n != 1 && numbers.find(n) == numbers.end()) 
        {
            numbers.insert(n);
            int newNumber = 0;

            while (n > 0) 
            {
                int digit = n % 10; 
                newNumber += digit * digit;
                n /= 10;
            }

            n = newNumber;
        }

    return n == 1;
}