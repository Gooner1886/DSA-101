// Leetcode - 581 - Shortest Unsorted Continuous Subarray
int findUnsortedSubarray(vector<int> &nums)
{
    int end = -1;
    int maxVal = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (maxVal > nums[i])
        {
            end = i;
        }
        else
        {
            maxVal = nums[i];
        }
    }

    int start = 0;
    int minVal = nums[nums.size() - 1];
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (minVal < nums[i])
        {
            start = i;
        }
        else
        {
            minVal = nums[i];
        }
    }
    return end - start + 1;
}