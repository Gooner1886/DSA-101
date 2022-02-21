// Leetcode - 209 - Minimum Size Subarray Sum
public int minSubArrayLen(int target, int[] nums) {
    int minLength = Integer.MAX_VALUE;
    
    int i = 0;
    int sum = 0;
    for(int j = 0; j < nums.length; j++) {
        sum += nums[j];
        while(sum >= target) {
            minLength = Math.min(minLength, j-i+1);
            sum -= nums[i++];
        }
    }
    return (minLength != Integer.MAX_VALUE) ? minLength : 0;
}