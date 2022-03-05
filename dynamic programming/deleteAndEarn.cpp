// Leetcode - 740 - Delete and earn
// int deleteAndEarn(vector<int> &nums)
// {
//     if (nums.size() == 0)
//         return nums[0];

//     vector<int> hash(10001, 0);
//     int maxTmp = INT_MIN;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         hash[nums[i]]++;
//         if (nums[i] > maxTmp)
//         {
//             maxTmp = nums[i];
//         }
//     }
//     int incl = 0;
//     int excl = 0;
//     for (int i = 0; i <= maxTmp; i++)
//     {
//         int temp = excl;
//         excl = max(incl, excl);
//         incl = temp + hash[i] * i;
//     }
//     return max(incl, excl);
// }
int deleteAndEarn(vector<int> &nums)
{
    const int N = 10001;
    vector<int> frequency(N, 0);

    for (auto num : nums)
    {
        frequency[num]++;
    }

    int dp[N];
    dp[0] = 0;
    dp[1] = frequency[1];

    for (int i = 2; i < N; i++)
    {
        dp[i] = max(dp[i - 2] + i * frequency[i], dp[i - 1]);
    }
    return dp[N - 1];
}