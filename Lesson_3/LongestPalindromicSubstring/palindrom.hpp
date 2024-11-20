#pragma once

#include <string>

using namespace std;

string longestPalindrome(string s)
{
    int max_len = 0;
    string result = "";
    for (int start = 0; start < s.length(); ++start)
    {
        for (int end = s.length() - 1; end >= start; --end)
        {
            int left = start;
            int right = end;

            while (left < right)
            {
                if (s[left] != s[right])
                {
                    break;
                }

                ++left;
                --right;
            }

            if (left >= right)
            {
                if (end - start + 1 > max_len)
                {
                    max_len = end - start + 1;
                    result = s.substr(start, max_len);
                }
            }
            
        }
    }

    return result;
}