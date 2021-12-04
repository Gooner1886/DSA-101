# Find the duplicate number - Leetcode
def findDuplicate(self, nums):

        """
        :type nums: List[int]
        :rtype: int
        """
        freq = {}
        for i in range(len(nums)):
            if nums[i] not in freq.keys():
                freq[nums[i]] = 1
            else:
                freq[nums[i]] += 1
        
        for num in freq:
            if freq[num] > 1:
                duplicate = num
            
        return duplicate