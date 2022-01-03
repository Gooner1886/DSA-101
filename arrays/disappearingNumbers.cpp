// Leetcode - Disappearing Numbers

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> disappeared;
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    for (int i = 1; i <= nums.size(); i++)
    {
        auto it = s.find(i);
        if (it == s.end())
        {
            disappeared.push_back(i);
        }
    }
    return disappeared;
}