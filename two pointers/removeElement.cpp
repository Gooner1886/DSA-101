// Leetcode - 27 - Remove Element
int removeElement(vector<int> &nums, int val)
{
    int i = 0;
    int offset = 0;
    int n = nums.size();
    while (i < n - offset)
    {
        if (nums[i] == val)
        {
            int temp = nums[n - offset - 1];
            nums[n - offset - 1] = nums[i];
            nums[i] = temp;
            ++offset;
        }
        else
        {
            ++i;
        }
    }
    return (n - offset);
}