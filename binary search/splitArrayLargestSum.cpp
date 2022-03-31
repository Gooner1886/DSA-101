// Leetcode - 410 - Split Array Largest Sum
bool canBeDistributed(vector<int> &nums, int mid, int m)
{
    int sum = 0;
    int saCount = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > mid)
        {
            saCount++;
            sum = nums[i];
        }
    }
    return saCount <= m;
}

int splitArray(vector<int> &nums, int m)
{
    int sum = 0;
    int maxVal = 0;
    for (int val : nums)
    {
        sum += val;
        maxVal = max(val, maxVal);
    }
    if (nums.size() == m)
    {
        return maxVal;
    }
    int low = maxVal;
    int high = sum;

    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canBeDistributed(nums, mid, m) == true)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}