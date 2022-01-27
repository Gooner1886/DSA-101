// Leetcode - 520 - Detect Capital
bool detectCapitalUse(string word)
{
    int totalCap = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            totalCap++;
        }
    }
    if (totalCap == 0 || totalCap == word.size() || (totalCap == 1 && isupper(word[0])))
    {
        return true;
    }
    return false;
}