# Number of rectangles that can form the largest Square - Leetcode

def countGoodRectangles(self, rectangles):
    """
    :type rectangles: List[List[int]]
    :rtype: int
    """
    freq = {}
    for i in rectangles:
        if min(i) not in freq.keys():
            freq[min(i)] = 1
        else:
            freq[min(i)] += 1
    max_len = 0
    for key in freq:
        if key > max_len:
            max_len = key
    return freq[max_len] 