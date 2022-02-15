// Leetcode - 58 - Length of the last word
int lengthOfLastWord(string s)
{
    int started = 0;
    int lastWordLength = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (started == 1 && s[i] == ' ')
        {
            break;
        }
        if (started == 0 && s[i] == ' ')
        {
            continue;
        }
        else
        {
            lastWordLength++;
            started = 1;
        }
    }
    return lastWordLength;
}