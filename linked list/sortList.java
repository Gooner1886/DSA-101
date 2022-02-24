// Leetcode - 148 - Sort List
public ListNode sortList(ListNode head) {
    PriorityQueue<Integer> minHeap = new PriorityQueue<>();
    
    while(head != null) {
        minHeap.add(head.val);
        head = head.next;
    }
    
    ListNode answer = new ListNode(-1);
    ListNode temp = answer;
    while(!minHeap.isEmpty()) {
        temp.next = new ListNode(minHeap.remove());
        temp = temp.next;
    }
    return answer.next;
}
