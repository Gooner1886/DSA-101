# Maximum Subarray - Leetcode
def maxSubArray(self, nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    max_current = nums[0] 
    max_so_far = nums[0]
    
    for i in range(1, len(nums)):
        max_current = max(nums[i], max_current + nums[i])
        max_so_far = max(max_current, max_so_far)
    return max_so_far    