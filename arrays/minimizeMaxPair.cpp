// Minimize Maximum Pair Sum in Array - Leetcode
#include <vector>
#include <algorithm>
#include <iostream>

int minPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> maxPairs;
    int i = 0;
    int j = nums.size() - 1;
    while (i < j)
    {
        maxPairs.push_back(nums[i] + nums[j]);
        i++;
        j--;
    }
    return *max_element(maxPairs.begin(), maxPairs.end());
}