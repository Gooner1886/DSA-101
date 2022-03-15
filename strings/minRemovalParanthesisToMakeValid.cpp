// Leetcode - 1249 - Minimal Removal of Paranthesis to make valid String
string minRemoveToMakeValid(string s)
{
    int n = s.size();
    int cnt = 0;
    string ans = "";
    string res = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
            ans += s[i];
        }
        else if (s[i] == ')')
        {
            if (cnt == 0)
            {
            }
            else
            {
                cnt--;
                ans += s[i];
            }
        }
        else
        {
            ans += s[i];
        }
    }

    if (cnt > 0)
    {
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i] == '(' and cnt > 0)
            {
                cnt--;
            }
            else
            {
                res += ans[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
    return ans;
}