// Leetcode - 141 - Linked List Cycle
bool hasCycle(ListNode *head)
{
    while (head != NULL)
    {
        if (head->val == 100001)
        {
            return true;
        }
        head->val = 100001;
        head = head->next;
    }
    return false;
}