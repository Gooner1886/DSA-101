// Leetcode - 1876. Substrings of Size Three with Distinct Characters
int countGoodSubstrings(string s)
{
    int answer = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        set<char> st{s[i - 1], s[i], s[i + 1]};
        if (st.size() == 3)
            answer++;
    }
    return answer;
}