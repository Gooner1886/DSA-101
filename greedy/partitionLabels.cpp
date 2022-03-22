// Leetcode - 763 - Partition Labels
vector<int> partitionLabels(string s)
{
    vector<int> result;
    unordered_map<char, int> lastIndex;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (lastIndex.find(s[i]) == lastIndex.end())
        {
            lastIndex[s[i]] = i;
        }
    }
    int maxIndex = 0;
    int start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        maxIndex = max(maxIndex, lastIndex[s[i]]);
        if (i == maxIndex)
        {
            result.push_back(maxIndex - start);
            start = i;
        }
    }
    return result;
}