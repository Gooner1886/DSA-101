// Move zeroes - Leetcode

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1)  return;
        int i = 0, j = 0;
        
        while(j < n) {
            if(nums[j] == 0) 
                ++j;
             else {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
                ++i;
            }
        }
    }