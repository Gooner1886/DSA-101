// Leetcode - 61 - Rotate List
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL)
        return NULL;
    ListNode *temp = head;
    int len = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        len++;
    }
    temp->next = head;
    int offset = len - (k % len);
    while (offset > 1)
    {
        head = head->next;
        offset--;
    }
    ListNode *answer = head->next;
    head->next = NULL;
    return answer;
}