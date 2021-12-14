// Kadane's algo to find max sum subarray - GeeksForGeeks
#include <limits.h>

long long maxSubarraySum(int arr[], int n)
{
    long max_sum = INT_MIN;
    long curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}