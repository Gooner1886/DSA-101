// Leetcode - 905 - Sort Array By Parity
vector<int> sortArrayByParity(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int k = nums.size() - 1;
    while (i <= k)
    {
        if (nums[i] % 2 == 1)
        {
            swap(nums[i], nums[k--]);
        }
        else if (nums[i] % 2 == 0)
        {
            swap(nums[i++], nums[j++]);
        }
        else
        {
            i++;
        }
    }
    return nums;
}