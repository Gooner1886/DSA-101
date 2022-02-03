// Leetcode - 125 - Valid Palindrome
bool isPalindrome(string s)
{
    int size = s.length();
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (isalnum(s[i]) != 0 && isalnum(s[j]) != 0)
        {
            if (tolower(s[i]) == tolower(s[j]))
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        else if (isalnum(s[i]) == 0 && isalnum(s[j]) != 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return true;
}