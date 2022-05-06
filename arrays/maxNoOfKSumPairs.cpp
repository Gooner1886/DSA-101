// Leetcode - 1679 - Maximum Number of K-Sum Pairs
int maxOperations(vector<int> &nums, int k)
{
    unordered_map<int, int> um;
    int count = 0;
    for (int val : nums)
    {
        int target = k - val;
        if (um.find(target) != um.end())
        {
            um[target]--;
            if (um[target] == 0)
            {
                um.erase(target);
            }
            count++;
        }
        else
        {
            um[val]++;
        }
    }
    return count;
}