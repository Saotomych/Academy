#include <gtest/gtest.h>
#include "happy_number.hpp"

TEST(HappyNumberTest, PositiveTestCases) 
{
    EXPECT_TRUE(isHappy(19));  // Число 19 счастливо
    EXPECT_TRUE(isHappy(1));   // Число 1 счастливо
    EXPECT_TRUE(isHappy(7));   // Число 7 счастливо
    EXPECT_TRUE(isHappy(10));  // Число 10 счастливо
}

TEST(HappyNumberTest, NegativeTestCases) 
{
    EXPECT_FALSE(isHappy(2));  // Число 2 не счастливо
    EXPECT_FALSE(isHappy(4));  // Число 4 не счастливо
    EXPECT_FALSE(isHappy(16)); // Число 16 не счастливо
    EXPECT_FALSE(isHappy(20)); // Число 20 не счастливо
}

TEST(HappyNumberTest, EdgeCases) 
{
    EXPECT_TRUE(isHappy(1)); // Пограничный случай: 1
    EXPECT_FALSE(isHappy(0)); // Пограничный случай: 0
    EXPECT_FALSE(isHappy(99)); // Большое число: 99
}

