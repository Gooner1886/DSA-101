// Leetcode - 392 - Is Subsequence
bool isSubsequence(string s, string t)
{
    if (s.size() > t.size())
    {
        return false;
    }
    int slen = s.size();
    ;
    int fpointer = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (fpointer >= slen)
            break;
        if (t[i] == s[fpointer])
        {
            fpointer++;
        }
        else
        {
            continue;
        }
    }
    return fpointer == slen ? true : false;
}