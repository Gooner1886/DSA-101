// Leetcode - Power of Four

bool isPowerOfFour(int n)
{
    int max = 1073741824;
    if (n == 0 || n < 0)
        return false;
    if (max % n == 0)
    {
        int power = log2(n);
        if (power % 2 != 0)
            return false;
        else
            return true;
    }
    return false;
}