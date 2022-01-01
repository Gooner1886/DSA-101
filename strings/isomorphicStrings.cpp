// Leetcode - Isomorphic Strings

bool isIsomorphic(string s, string t)
{
    unordered_map<char, int> mp1, mp2;
    for (int i = 0; i < s.size(); i++)
    {
        if ((mp1.find(s[i]) != mp1.end() and mp1[s[i]] != t[i]) or (mp2.find(t[i]) != mp2.end() and mp2[t[i]] != s[i]))
            return false;
        mp1[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }

    return true;