// Add two numbers - Leetcode

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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int carry = 0;
        int sum = 0;
        int x, y = 0;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1 != NULL || p2 != NULL) {
            x = (p1 != NULL) ? p1->val : 0;
            y = (p2 != NULL) ? p2->val : 0;
            sum = x + y + carry;
            carry = sum/10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            if(p1 != NULL) p1 = p1->next;
            if(p2 != NULL) p2 = p2->next;
        }
        if(carry > 0) {
            temp->next = new ListNode(carry);
        }
        return res->next;
    }
};