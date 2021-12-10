// First Bad Version - Leetcode

int firstBadVersion(int n)
{
    int low = 1;
    int high = n;
    int ans = -1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {

        if (isBadVersion(mid))
        {
            ans = mid;
            high = mid - 1;
        }

        else
            low = mid + 1;

        mid = low + (high - low) / 2;
    }
    return ans;
}