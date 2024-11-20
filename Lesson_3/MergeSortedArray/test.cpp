#include <gtest/gtest.h> 

#include "merge.hpp"
 
class MergeSortedArrayTest : public ::testing::Test 
{ 
protected: 
    void runTest(std::vector<int> nums1, int m, std::vector<int> nums2, int n, const std::vector<int>& expected) 
    { 
        merge(nums1, m, nums2, n); 
        EXPECT_EQ(nums1, expected); 
    } 
}; 

TEST_F(MergeSortedArrayTest, GeneralCase) 
{ 
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    std::vector<int> nums2 = {2, 5, 6}; 
    std::vector<int> expected = {1, 2, 2, 3, 5, 6}; 
    runTest(nums1, 3, nums2, 3, expected); 
} 
 
TEST_F(MergeSortedArrayTest, EmptyNums2) 
{ 
    std::vector<int> nums1 = {1}; 
    std::vector<int> nums2 = {}; 
    std::vector<int> expected = {1}; 
    runTest(nums1, 1, nums2, 0, expected); 
} 
 
TEST_F(MergeSortedArrayTest, EmptyNums1) 
{ 
    std::vector<int> nums1 = {0}; 
    std::vector<int> nums2 = {1}; 
    std::vector<int> expected = {1}; 
    runTest(nums1, 0, nums2, 1, expected); 
} 
 
TEST_F(MergeSortedArrayTest, OverlappingElements) 
{ 
    std::vector<int> nums1 = {2, 0}; 
    std::vector<int> nums2 = {1}; 
    std::vector<int> expected = {1, 2}; 
    runTest(nums1, 1, nums2, 1, expected); 
} 
 
TEST_F(MergeSortedArrayTest, LargerNums2) 
{ 
    std::vector<int> nums1 = {0, 0, 0, 0, 0, 0}; 
    std::vector<int> nums2 = {1, 2, 3, 4, 5, 6}; 
    std::vector<int> expected = {1, 2, 3, 4, 5, 6}; 
    runTest(nums1, 0, nums2, 6, expected); 
} 
 
TEST_F(MergeSortedArrayTest, IdenticalElements) 
{ 
    std::vector<int> nums1 = {1, 1, 1, 0, 0, 0}; 
    std::vector<int> nums2 = {1, 1, 1}; 
    std::vector<int> expected = {1, 1, 1, 1, 1, 1}; 
    runTest(nums1, 3, nums2, 3, expected); 
}
