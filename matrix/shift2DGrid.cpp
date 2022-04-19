// Leetcode - 1260 - Shift 2D Grid
void rev(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
    vector<int> nums(grid.size() * grid[0].size());
    int index = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            nums[index] = grid[i][j];
            index++;
        }
    }

    k = k % (nums.size());
    rev(nums, 0, nums.size() - k - 1);
    rev(nums, nums.size() - k, nums.size() - 1);
    rev(nums, 0, nums.size() - 1);

    index = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            grid[i][j] = nums[index];
            index++;
        }
    }
    return grid;
}