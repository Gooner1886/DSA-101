// Leetcode - 2248 - Intersection of Multiple Arrays
vector<int> intersection(vector<vector<int>> &nums)
{
    vector<int> ans;
    map<int, int> um;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            um[nums[i][j]]++;
        }
    }
    for (auto it : um)
    {
        if (it.second == nums.size())
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}