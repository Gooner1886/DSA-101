// Leetcode - 328 - Odd Even Linked List
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return head;
    ListNode *stOdd = head;
    ListNode *stEven = head->next;
    ListNode *curr = head->next;
    ListNode *temp = NULL;
    while (curr != NULL)
    {
        temp = curr->next;
        if (temp != NULL)
        {
            head->next = temp;
            curr->next = temp->next;
            head = head->next;
            curr = curr->next;
        }
        else if (temp == NULL)
        {
            break;
        }
    }
    if (temp == NULL)
    {
        head->next = stEven;
    }
    else
    {
        temp->next = stEven;
    }
    return stOdd;
}