// Leetcode - 703 - Kth Largest Element in a Stream
class KthLargest {
    PriorityQueue<Integer> maxHeap = new PriorityQueue<>();
    int k;

    public KthLargest(int k, int[] nums) {
        for (int val : nums) {
            maxHeap.add(val);
        }
        this.k = k;
    }

    public int add(int val) {
        maxHeap.add(val);
        while (maxHeap.size() > k) {
            maxHeap.remove();
        }
        return maxHeap.peek();
    }
}