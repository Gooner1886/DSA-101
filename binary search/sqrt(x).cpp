// Leetcode - 69 - Sqrt(x)

int mySqrt(int x)
{
    int l = 1, r = x / 2;
    if (x == 1)
        return 1;

    while (l <= r)
    {
        long long mid = l + (r - l) / 2;

        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return r;
}