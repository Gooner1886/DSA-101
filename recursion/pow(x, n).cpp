// Leetcode - 50 - Pow(x, n)
double myPow(double x, long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (x == 0)
        return 0;

    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }

    if (n & 1)
    {
        return x * myPow(x * x, n >> 1);
    }
    else
    {
        return myPow(x * x, n >> 1);
    }
}