// Leetcode - 409 - Longest Palindrome
int longestPalindrome(string s)
{
    unordered_map<char, int> um;
    for (int i = 0; i < s.size(); i++)
    {
        um[s[i]]++;
    }
    int count = 0;
    int toggle = 0;

    for (auto it : um)
    {
        if (it.second % 2 == 0)
        {
            count += it.second;
        }
        else if (it.second % 2 != 0)
        {
            toggle = 1;
            count += it.second - 1;
        }
    }
    return (toggle == 1) ? count + 1 : count;
}