#pragma once

#include <string>

using namespace std;

string longestPalindrome(string s)
{
	string result;
	for (int start = 0; start < s.length(); ++start)
	{
		for (int end = s.length() - 1; end >= start; --end)
		{
			if (isPalindrome(s, start, end))
			{
				if (end - start + 1 > result.size())
				{
					result = s.substr(start, end - start + 1);
				}
			}
			
		}
	}

	return result;
}

bool isPalindrome(const std::string& s, int left, int right)
{
	while (left < right)
	{
		if (s[left] != s[right])
		{
			return false;
		}
		++left;
		--right;
	}
	return true;
}
