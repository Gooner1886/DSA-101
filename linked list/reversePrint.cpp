// Print in Reverse - Hackkerank

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* future = NULL;
    SinglyLinkedListNode* curr = head;\
    while(curr != NULL) {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    
    return prev;
}

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* rhead = reverse(llist);
    SinglyLinkedListNode* temp = rhead;
    while(temp != NULL) {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}
