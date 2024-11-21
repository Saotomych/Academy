#pragma once

#include <vector>

using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;
	while (i >= 0 && j >= 0)
	{
		nums1[k--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
	}
	if (j != -1)
		std::copy(&nums2[0], &nums2[j+1], &nums1[0]);
}
