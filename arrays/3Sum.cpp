// 3Sum - Leetcode

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();
    vector<vector<int>> result;

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
            }
            else if (nums[i] + nums[j] + nums[k] > 0)
                k--;
            else
            {
                j++;
            }
        }
    }
    return result;
}