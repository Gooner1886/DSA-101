// Leetcode - Ransom Note

bool canConstruct(string ransomNote, string magazine)
{
    if (magazine.size() < ransomNote.size())
        return false;
    unordered_map<char, int> um;
    for (int i = 0; i < magazine.size(); i++)
    {
        if (!um[magazine[i]])
            um[magazine[i]] = 1;
        else
            um[magazine[i]]++;
    }
    for (int j = 0; j < ransomNote.size(); j++)
    {
        auto itr = um.find(ransomNote[j]);
        if (itr == um.end())
            return false;
        else
        {
            if (itr->second == 1)
            {
                um.erase(ransomNote[j]);
            }
            else
            {
                (itr->second)--;
            }
        }
    }
    return true;
}