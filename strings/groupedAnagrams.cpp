// Leetcode - Grouped Anagrams

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> groupedAnagrams;
    unordered_map<string, vector<string>> um;
    for (auto &it : strs)
    {
        string word = it;
        sort(word.begin(), word.end());
        um[word].push_back(it);
    }
    groupedAnagrams.reserve(um.size());
    for (auto &it : um)
    {
        groupedAnagrams.push_back(it.second);
    }
    return groupedAnagrams;
}