// Leetcode - 403 - Frog Jump
bool canCross(vector<int> &stones)
{
    unordered_map<int, set<int>> um;
    um[stones[0] + 1] = {1};
    for (int i = 1; i < stones.size(); i++)
    {
        int position = stones[i];
        for (auto it : um[position])
        {
            um[position + it].insert(it);
            um[position + it + 1].insert(it + 1);
            um[position + it - 1].insert(it - 1);
        }
    }
    return um[stones[stones.size() - 1]].size() != 0;
}