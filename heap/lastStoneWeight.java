// Leetcode - 1046 - Last Stone Weight
public int lastStoneWeight(int[] stones) {
    PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
    for(int val : stones) maxHeap.add(val);
    while(maxHeap.size() > 1) {
        int stone1 = maxHeap.poll();
        int stone2 = maxHeap.poll();
        if(stone1 != stone2) {
            maxHeap.add(stone1 - stone2);
        }
    }
    return maxHeap.isEmpty() ? 0 : maxHeap.peek();
}