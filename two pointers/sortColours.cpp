// Leetcode - 75 - Sort Colours
void sortColors(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int end = nums.size() - 1;
    while (i <= end)
    {
        if (nums[i] == 0)
        {
            swap(nums[i++], nums[j++]);
        }
        else if (nums[i] == 2)
        {
            swap(nums[end--], nums[i]);
        }
        else
        {
            i++;
        }
    }
}