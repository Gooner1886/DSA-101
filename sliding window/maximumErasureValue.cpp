// Leetcode - 1695 - Maximum Erasure Value
int maximumUniqueSubarray(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int maxVal = INT_MIN;

    set<int> s;

    while (j < nums.size())
    {
        while (s.count(nums[j]) > 0)
        {
            s.erase(nums[i]);
            temp -= nums[i];
            i++;
        }

        temp += nums[j];
        s.insert(nums[j]);
        j++;

        maxVal = max(maxVal, temp);
    }
    return maxVal;
}