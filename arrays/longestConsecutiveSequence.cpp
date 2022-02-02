// Leetcode - 128 - Longest Consecutive Sequence
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int answer = 1;
    int prev = INT_MIN;
    int currentLongest = 1;

    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    for (auto x : s)
    {
        if (x == prev + 1)
        {
            currentLongest++;
            answer = max(answer, currentLongest);
        }
        else
        {
            currentLongest = 1;
        }
        prev = x;
    }
    return answer;
}