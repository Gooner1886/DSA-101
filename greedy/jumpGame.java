// Leetcode - 55 - Jump Game

public boolean canJump(int[] nums) {
    int latestGoodIndex = nums.length - 1;
    for(int i = nums.length - 1; i>= 0; i--) {
        if(i + nums[i] >= latestGoodIndex) {
            latestGoodIndex = i;
        }
    }
    return latestGoodIndex == 0;
}
