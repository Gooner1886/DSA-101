// Leetcode - 1608 - Special Array With X Elements Greater Than or Equal to X
int specialArray(vector<int> &nums)
{
    vector<int> temp(1001, 0);
    for (auto it : nums)
    {
        temp[it]++;
    }
    int length = nums.size();
    for (int i = 0; i < 1001; i++)
    {
        if (i == length)
            return i;
        length -= temp[i];
    }
    return -1;
}