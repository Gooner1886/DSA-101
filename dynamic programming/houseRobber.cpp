// Leetcode - House Robber

int rob(vector<int> &nums)
{
    int maxMoney = 0;
    vector<int> dp(nums.size());
    calculateMaxMoney(nums, dp, maxMoney);
    return maxMoney;
}

void calculateMaxMoney(vector<int> &nums, vector<int> &dp, int &maxMoney)
{
    if (nums.size() == 1)
    {
        maxMoney = nums[0];
        return;
    }
    if (nums.size() == 2)
    {
        maxMoney = max(nums[0], nums[1]);
        return;
    }
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < dp.size(); i++)
    {
        dp[i] = max((nums[i] + dp[i - 2]), dp[i - 1]);
    }
    maxMoney = dp[dp.size() - 1];
}