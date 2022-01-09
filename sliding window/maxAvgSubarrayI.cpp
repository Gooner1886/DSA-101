// Leetcode - 643 - Max Average Subarray I
double findMaxAverage(vector<int> &nums, int k)
{
    int i = 0;
    int j = 0;
    double result = INT_MIN;
    double avg = 0;
    while (j < nums.size())
    {
        avg += ((nums[j] * 1.0) / k);
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            result = max(avg, result);
            avg -= ((nums[i] * 1.0) / k);
            i++;
            j++;
        }
    }
    return result;
}