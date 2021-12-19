// Longest Substring Without Repeating Characters - Leetcode

int lengthOfLongestSubstring(string s)
{
    if (s.size() < 2)
        return s.size();
    map<char, int> m;
    m[s[0]]++;
    int max = 1;
    int l = 0;
    for (int i = 1; i < s.size(); i++)
    {
        m[s[i]]++;
        if (m[s[i]] == 2)
        {
            while (m[s[l]] != m[s[i]])
            {
                m.erase(s[l]);
                l++;
            }
            m[s[l]]--;
            l++;
        }
        else if (max < m.size())
        {
            max = m.size();
        }
    }
    return max;
}