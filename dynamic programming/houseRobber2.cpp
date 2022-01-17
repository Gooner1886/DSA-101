// Leetcode - 213 - House Robber 2
int rob(vector<int> &nums)
{
    vector<int> dp(nums.size(), 0);
    vector<int> dp1(nums.size(), 0);
    if (nums.size() == 1)
    {
        return nums[0];
    }
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size() - 1; i++)
    {
        dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
    }

    if (nums.size() == 2)
    {
        return max(nums[0], nums[1]);
    }
    dp1[1] = nums[1];
    dp1[2] = max(nums[1], nums[2]);
    for (int i = 3; i < nums.size(); i++)
    {
        dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i]);
    }
    return max(dp[nums.size() - 2], dp1[nums.size() - 1]);
}