// Leetcode - 300 - Longest Increasing Subsequence
vector<int> dp(nums.size() + 1);
dp[0] = 1;
for (int i = 1; i < nums.size(); i++)
{
    dp[i] = 1;
    int temp = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        if (nums[j] >= nums[i])
        {
            continue;
        }
        temp = max(temp, dp[j]);
    }
    dp[i] = temp + 1;
}

int maxLength = INT_MIN;
for (int i = 0; i < nums.size(); i++)
{
    maxLength = max(maxLength, dp[i]);
}
return maxLength;
}