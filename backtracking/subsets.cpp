// Leetcode - 78 - Subsets
void backtrack(int index, vector<int> &nums, vector<int> &subset, vector<vector<int>> &result)
{
    for (int i = index; i < nums.size(); i++)
    {
        subset.push_back(nums[i]);
        result.push_back(subset);
        backtrack(i + 1, nums, subset, result);
        subset.pop_back();
    }
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> result;
    vector<int> subset;
    backtrack(0, nums, subset, result);
    result.push_back({});
    return result;
}