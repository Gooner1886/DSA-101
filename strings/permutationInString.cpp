// Permutation in String - Leetcode

bool equal(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;
    int freq1[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
    {
        freq1[(s1[i] - 97) % 26]++;
    }
    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        int freq2[26] = {0};
        for (int j = 0; j < s1.length(); j++)
        {
            freq2[(s2[i + j] - 97) % 26]++;
        }
        if (equal(freq1, freq2))
        {
            return true;
        }
    }
    return false;
}