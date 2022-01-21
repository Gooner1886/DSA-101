// Leetcode - 34 - Find First and Last Position of Element in Sorted Array
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result(2);
    result[0] = findStartIndex(nums, target);
    result[1] = findEndIndex(nums, target);
    return result;
}

int findStartIndex(vector<int> &nums, int target)
{
    int index = -1;
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + (end - start) / 2);
        if (nums[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        if (nums[mid] == target)
        {
            index = mid;
        }
    }
    return index;
}

int findEndIndex(vector<int> &nums, int target)
{
    int index = -1;
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + (end - start) / 2);
        if (nums[mid] <= target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        if (nums[mid] == target)
        {
            index = mid;
        }
    }

    return index;
}