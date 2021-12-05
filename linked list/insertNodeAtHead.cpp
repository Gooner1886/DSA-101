// Insert Node at head of LL - Hackerrank

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    if(llist == NULL) {
        SinglyLinkedListNode* first = new SinglyLinkedListNode(data);
        llist -> next = first;
    }
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    temp -> next = llist->next;
    llist -> next = temp;
    return llist;
    
}