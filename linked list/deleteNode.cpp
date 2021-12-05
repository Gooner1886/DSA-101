// Delete Node in a linked list - Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* future = node->next;
        node->val = future->val;
        node->next = future->next;
        delete(future);
    }
};