// Leetcode - 23 - Merge K Sorted Lists

public ListNode mergeKLists(ListNode[] lists) {
    PriorityQueue<Integer> minHeap = new PriorityQueue<>();
    for(ListNode head: lists) {
        while(head != null) {
            minHeap.add(head.val);
            head = head.next;
        }
    }
    ListNode answer = new ListNode(-1);
    ListNode temp = answer;
    while(!minHeap.isEmpty()) {
        temp.next = new ListNode(minHeap.remove());
        temp = temp.next;
    }
    
    return answer.next;
}