// Leetcode - 973 - K Closest Points to Origin
public int[][] kClosest(int[][] points, int k) {
    int [][] result = new int[k][2];
    PriorityQueue<int[]> maxHeap = new PriorityQueue<>((a, b) -> (b[0] * b[0] + b[1] * b[1]) - (a[0] * a[0] + a[1] * a[1]));
    for(int[] point : points) {
        maxHeap.add(point);
        if(maxHeap.size() > k) {
            maxHeap.remove();
        }
    }
    while(k-- > 0) {
        result[k] = maxHeap.remove();
    }
    return result;
}