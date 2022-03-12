// Leetcode - 138 - Copy List with Random Pointer
Node *copyRandomList(Node *head)
{
    if (head == NULL)
        return head;
    // [7]-[13]-[11]-[1]
    // [7] - [copy 7] - [13] - [copy 13] - [11] - [copy 11] - [1] - [copy 1]
    Node *ptr = head;
    Node *temp = head;
    while (ptr != NULL)
    {
        temp = ptr->next;
        ptr->next = new Node(ptr->val);
        ptr->next->next = temp;
        ptr = temp;
    }
    ptr = head;
    while (ptr != NULL)
    {
        ptr->next->random = ptr->random ? ptr->random->next : NULL;
        ptr = ptr->next->next;
    }

    Node *copiedHead = head->next;
    Node *forRand = head->next;
    while (head != NULL)
    {
        head->next = head->next->next;
        forRand->next = forRand->next ? forRand->next->next : NULL;
        head = head->next;
        forRand = forRand->next;
    }
    return copiedHead;
}