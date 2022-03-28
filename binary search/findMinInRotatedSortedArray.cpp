// Leetcode - 153 - Find Minimum in rotated sorted array
int findMin(vector<int> &nums)
{
    int minVal = INT_MAX;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[mid])
        {
            minVal = min(minVal, nums[low]);
            low = mid + 1;
        }
        else
        {
            minVal = min(minVal, nums[mid]);
            high = mid - 1;
        }
    }
    return minVal;
}