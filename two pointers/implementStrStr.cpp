// Leetcode - 28 - Implement strStr
int strStr(string haystack, string needle)
{
    /* if(needle.empty()) return 0;
     vector<int> hay(26, 0);
     vector<int> need(26, 0);
     for(int i = 0; haystack[i] != '\0'; i++) {
         hay[haystack[i] - 'a']++;
     }
     for(int j = 0; needle[j] != '\0'; j++) {
         need[needle[j] - 'a']++;
     }
     for(int x = 0; needle[x] != '\0'; x++) {
         if (!(need[needle[x] - 'a'] == hay[haystack[x] - 'a'])) return -1;
     }
     return -1; */

    if (needle.empty())
        return 0;
    int n = haystack.size();
    int m = needle.size();
    if (n < m)
        return -1;

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if (j == m)
            return i;
    }
    return -1;
}