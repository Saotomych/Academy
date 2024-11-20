#include <gtest/gtest.h> 
#include "palindrom.hpp" 
 
TEST(LongestPalindromeTest, BasicTests) 
{ 
    EXPECT_EQ(longestPalindrome("babad"), "bab");
    EXPECT_EQ(longestPalindrome("cbbd"), "bb"); 
    EXPECT_EQ(longestPalindrome("a"), "a"); 
    EXPECT_EQ(longestPalindrome("racecar"), "racecar"); 
    EXPECT_EQ(longestPalindrome("abc"), "a"); 
    EXPECT_EQ(longestPalindrome("abacdfgdcaba"), "aba");
} 
 
TEST(LongestPalindromeTest, EdgeCases) 
{ 
    EXPECT_EQ(longestPalindrome(""), ""); 
    EXPECT_EQ(longestPalindrome("aaaa"), "aaaa"); 
    EXPECT_EQ(longestPalindrome("aabac"), "aba"); 
}
