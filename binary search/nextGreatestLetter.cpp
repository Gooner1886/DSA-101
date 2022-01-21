// Leetcode - 744 - Smallest Letter Greater than Target

char nextGreatestLetter(vector<char> &letters, char target)
{

    int start = 0;
    int end = letters.size();
    while (start < end)
    {
        int mid = (start + (end - start) / 2);
        if (letters[mid] <= target)
        {
            start = (mid + 1);
        }
        else
        {
            end = mid;
        }
    }
    return letters[start % letters.size()];
}