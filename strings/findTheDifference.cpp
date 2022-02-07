// Leetcode - 389 - Find the difference
char findTheDifference(string s, string t)
{
    // Since string t differs by one character its ascii value would be greater by the extra character
    return accumulate(t.begin(), t.end(), 0) - accumulate(s.begin(), s.end(), 0);
}