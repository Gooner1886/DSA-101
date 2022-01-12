// Leetcode - 14 - Longest Common Prefix
string longestCommonPrefix(vector<string> &strs)
{
    string comparator = strs[0];
    int longestPrefixLength = INT_MAX;

    for (int i = 1; i < strs.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < strs[i].size(); j++)
        {
            if (j == 0 && (strs[i][j] != comparator[j]))
            {
                return "";
            }
            if (j >= comparator.size())
            {
                break;
            }
            if (strs[i][j] == comparator[j])
            {
                temp++;
            }
            else
            {
                break;
            }
        }
        if (temp < longestPrefixLength)
            longestPrefixLength = temp;
    }
    cout << longestPrefixLength;
    return comparator.substr(0, longestPrefixLength);
}