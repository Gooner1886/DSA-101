// Leetcode - 1011 - Capacity to ship packages within D Days (Binary search + Greedy)
bool canBeDivided(vector<int> &nums, int mid, int days)
{
    int dayCount = 1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > mid)
        {
            dayCount++;
            sum = nums[i];
        }
    }
    return dayCount <= days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int sum = 0;
    int maxVal = 0;
    for (int val : weights)
    {
        sum += val;
        maxVal = max(maxVal, val);
    }
    if (weights.size() == days)
    {
        return maxVal;
    }
    int low = maxVal;
    int high = sum;

    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canBeDivided(weights, mid, days) == true)
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