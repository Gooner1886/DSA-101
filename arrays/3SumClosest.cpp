// Leetcode - 16 - 3Sum Closest
int result = nums[0] + nums[1] + nums[2];
sort(nums.begin(), nums.end());

for (int i = 0; i < nums.size() - 2; i++)
{
    int a_pointer = i + 1;
    int b_pointer = nums.size() - 1;

    while (a_pointer < b_pointer)
    {
        int current_sum = nums[i] + nums[a_pointer] + nums[b_pointer];
        if (current_sum > target)
        {
            b_pointer--;
        }
        else
        {
            a_pointer++;
        }

        if (abs(current_sum - target) < abs(result - target))
        {
            result = current_sum;
        }
    }
}
return result;