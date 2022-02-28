// Leetcode - 228 - Summary Ranges
vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> res;
    if (nums.size() == 0)
        return res;
    string current = to_string(nums[0]);
    string end_range = "";
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            end_range = to_string(nums[i]);
        }
        else
        {
            if (end_range != "")
            {
                current = current + "->" + end_range;
            }
            res.push_back(current);
            current = to_string(nums[i]);
            end_range = "";
        }
    }
    if (end_range == "")
    {
        res.push_back(current);
    }
    else
    {
        res.push_back(current + "->" + end_range);
    }
    return res;
}