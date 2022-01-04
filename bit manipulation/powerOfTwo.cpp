// Leetcode - Power of Two

bool isPowerOfTwo(int n)
{
    int max = 1073741824;
    if (n == 0 || n < 0)
        return false;
    if (max % n == 0)
    {
        return true;
    }
    return false;
}