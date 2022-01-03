// Leetcode - Reverse only letters

string reverseOnlyLetters(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (!isalpha(s[i]) && !isalpha(s[j]))
        {
            i++;
            j--;
        }
        else if (!isalpha(s[i]))
        {
            i++;
        }
        else if (!isalpha(s[j]))
        {
            j--;
        }
        else
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return s;
}