// Leetcode - 438 - Find all anagrams in a string
vector<int> findAnagrams(string s, string p)
{
    if (p.size() > s.size())
        return {};
    vector<int> result;
    int slen = s.size();
    int plen = p.size();

    vector<int> pHash(26, 0);
    vector<int> window(26, 0);

    for (int i = 0; i < p.size(); i++)
    {
        pHash[p[i] - 'a']++;
        window[s[i] - 'a']++;
    }

    if (pHash == window)
        result.push_back(0);

    for (int i = plen; i < slen; i++)
    {
        window[s[(i - plen)] - 'a']--;
        window[s[i] - 'a']++;

        if (pHash == window)
        {
            result.push_back(i - plen + 1);
        }
    }
    return result;
}