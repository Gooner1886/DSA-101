# Last Stone Weight - Leetcode

def lastStoneWeight(self, stones):
        stones.sort(reverse = True)
        
        while(len(stones) > 1):
            
            if stones[0] == stones[1]:
                del stones[0:2]
                
                
            else:
                most = stones[0]
                sec_most = stones[1]
                del stones[0:2]
                stones.append((most - sec_most))
                stones.sort(reverse = True)
                
        if stones:
            return stones[0]
        else:
            return 0