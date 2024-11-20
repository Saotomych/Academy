#include <iostream>

#include "merge.hpp"

int main()
{
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << " ";
    }

    return 0;
}