// Leetcode - 81 - Search in a rotated sorted array II
bool search(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {(
            int mid = (low + (high - low) / 2);
            if(nums[mid] == target) return true;
            else if(nums[mid] > target) {
            high = mid - 1;
            } else {
            low = mid + 1;
            }
    }
    return false;
}