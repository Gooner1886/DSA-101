// Leetcode - 680 - Valid Palindrome
bool reducedPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s)
{
    if (s.size() <= 2)
        return true;
    int count = 0;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return (reducedPalindrome(s, i + 1, j) || reducedPalindrome(s, i, j - 1));
        }
        i++;
        j--;
    }
    return true;
}