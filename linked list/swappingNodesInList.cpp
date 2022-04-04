// Leetcode - 1721 - Swap Nodes in Pairs
ListNode *temp = head;
ListNode *left = head;
ListNode *right = head;
int flag = 1;
while (temp != NULL)
{
    if (flag < k)
    {
        left = left->next;
    }
    if (flag > k)
    {
        right = right->next;
    }
    flag++;
    temp = temp->next;
}
int curr = left->val;
left->val = right->val;
right->val = curr;

return head;