// Reverse a linked list - Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* future = NULL;
        while(temp != NULL) {
            future = temp->next;
            temp->next = prev;
            prev = temp;
            temp = future;
        }
        head = prev;
        return head;
        
    }