// Leetcode - 287 - Find the Duplicate Number
int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int j = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] - nums[j] == 0)
        {
            return nums[i];
        }

        j++;
    }
    return 0;
}