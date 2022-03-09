// Leetcode - 82 - Remove duplicates from Sorted List
ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *temp = new ListNode(-1);
    map<int, int> dup;
    while (head != NULL)
    {
        if (!dup[head->val])
        {
            dup[head->val] = 1;
        }
        else
        {
            dup[head->val]++;
        }
        head = head->next;
    }
    ListNode *answer = temp;
    for (auto it = dup.begin(); it != dup.end(); it++)
    {
        if (it->second == 1)
        {
            temp->next = new ListNode(it->first);
            temp = temp->next;
        }
    }
    return answer->next;
}