// Leetcode - 86 - Partition List
ListNode *partition(ListNode *head, int x)
{
    ListNode *curr = head;
    if (head == NULL)
        return head;
    vector<int> less;
    vector<int> greater;

    while (curr != NULL)
    {
        if (curr->val < x)
        {
            less.push_back(curr->val);
        }
        else if (curr->val >= x)
        {
            greater.push_back(curr->val);
        }
        curr = curr->next;
    }
    curr = head;
    for (auto val : less)
    {
        curr->val = val;
        curr = curr->next;
    }
    for (auto val : greater)
    {
        curr->val = val;
        curr = curr->next;
    }
    return head;
}