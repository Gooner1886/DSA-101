// Leetcode - 413 - Arithmetic Slices
public int numberOfArithmeticSlices(int[] nums) {
    if(nums.length < 3) return 0;
    int res = 0, count = 0;
    for(int i = 1; i < nums.length - 1; i++) {
        if(nums[i+1] - nums[i] == nums[i] - nums[i-1]) {
            count++;
            res += count;
        } else {
            count = 0;
        }
    }
    return res;
}