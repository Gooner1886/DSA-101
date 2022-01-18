// Leetcode - 740 - Delete and earn
int deleteAndEarn(vector<int> &nums)
{
    if (nums.size() == 0)
        return nums[0];

    vector<int> hash(10001, 0);
    int maxTmp = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
        if (nums[i] > maxTmp)
        {
            maxTmp = nums[i];
        }
    }
    int incl = 0;
    int excl = 0;
    for (int i = 0; i <= maxTmp; i++)
    {
        int temp = excl;
        excl = max(incl, excl);
        incl = temp + hash[i] * i;
    }
    return max(incl, excl);
}