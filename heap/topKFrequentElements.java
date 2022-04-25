// Leetcode - 347 - Top K Frequent Elements
public int[] topKFrequent(int[] nums, int k) {
    HashMap<Integer, Integer> map = new HashMap<>();
    
    for (int i: nums)
        map.put(i, map.getOrDefault(i, 0) + 1);
    
    PriorityQueue<Map.Entry<Integer, Integer>> q = new PriorityQueue<>
                (Map.Entry.comparingByKey(Comparator.reverseOrder()));
    
    int[] ans = new int[k];
    
    for (int key: map.keySet())
        q.offer(Map.entry(map.get(key), key));
    
    int idx = 0;
    while (k > 0){
        Map.Entry<Integer, Integer> val = q.poll();
        ans[idx++] = val.getValue();
        k--;
    }
    
    return ans;
}
