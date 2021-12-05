// Palindrome of Linked list - Leetcode

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
    bool isPalindrome(ListNode* head) {
        ListNode* end = head;
        int size = 1;
        while(end->next != NULL) {
            end = end->next;
            size+=1;
        }
        ListNode* t = head;
        for (int i = 1; i <= size/2; i++) {
            t = t->next;
        } 
        end = reverseList(t);
        ListNode* start = head;
        for (int i = 1; i <= size/2; i++) {
            if(start->val == end->val) {
                start = start->next;
                end = end->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};