// Reverse Words in a String III - Leetcode

string reverseWords(string s)
{
    int i = 0;
    for (int j = 0; j <= s.size(); j++)
    {
        if (s[j] == ' ' || s[j] == '\0')
        {
            int k = j - 1;
            while (i < k)
            {
                char temp = s[i];
                s[i] = s[k];
                s[k] = temp;
                i++;
                k--;
            }
            i = j + 1;
        }
    }
    return s;
}