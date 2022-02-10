// Leetcode - 560 - Subarray Sum equals K
int subarraySum(vector<int> &nums, int k)
{
    if (nums.size() == 0)
        return 0;
    int sum = 0;
    int result;
    unordered_map<int, int> arraySum;
    arraySum[0] = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        auto it = arraySum.find(sum - k);
        if (it != arraySum.end())
        {
            result += it->second;
        }

        if (!arraySum[sum])
        {
            arraySum[sum] = 1;
        }
        else
        {
            arraySum[sum]++;
        }
    }
    return result;
}