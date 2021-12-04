# assign cookies - Leetcode

def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        
        i = 0
        j = 0
        counter = 0
        while(i < len(g) and j < len(s)):
            if g[i] <= s[j]:
                i += 1
                j += 1
                counter += 1
            else:
                j += 1
        return counter