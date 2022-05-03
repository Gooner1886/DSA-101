// Leetcode - 56 - Merge Intervals
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    if (intervals.size() == 0)
        return {{}};
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;
    result.push_back(intervals[0]);
    for (auto it : intervals)
    {
        if (result.back()[1] >= it[0])
        {
            result.back()[1] = max(result.back()[1], it[1]);
        }
        else
        {
            result.push_back(it);
        }
    }
    return result;
}