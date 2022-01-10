// Leetcode - 45 - Jump Game II
public int jump(int[] nums) {
    int[] dp = new int[nums.length];
    Arrays.fill(dp, Integer.MAX_VALUE);
    dp[0] = 0;
    
    for(int i = 1; i < nums.length; i++) {
        for(int j = i-1; j >= 0; j--) {
            if(nums[j] >= i-j) {
                dp[i] = Math.min(1 + dp[j], dp[i]);
            }
        }
    }
    return dp[nums.length - 1];
}