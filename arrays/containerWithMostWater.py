""" Container with most water - Leetcode """
def maxArea(self, height):
    """
    :type height: List[int]
    :rtype: int
    """
    i, j = 0, len(height) - 1
    area, maximum = 0, 0
        
    while i <= j:
        if height[i] > height[j]:
            area = height[j] * (j-i)
            j -= 1
        else:
            area = height[i] * (j-i)
            i += 1
        if area > maximum:
            maximum = area
    return maximum  