// Leetcode - 713 - Subarray Product less than K
int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    if (k <= 1)
        return 0;
    int left = 0;
    int right = 0;
    int product = 1;
    int result = 0;
    while (right < nums.size())
    {
        product *= nums[right];

        while (product >= k)
        {
            product /= nums[left];
            left++;
        }

        result += right - left + 1;

        right++;
    }
    return result;
}