// Remove Nth Node from List - Leetcode

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL) {
            size += 1;
            temp = temp->next;
            
        }
        int NFromBeg = size - n;
        ListNode* t = head;
        if (NFromBeg == 0) {
            head = head->next;
            delete(t);
        }
        else if(NFromBeg == size - 1){
            for(int i = 1; i < NFromBeg; i++) {
            t = t->next;
            }
            t->next = NULL;
        }
        else {
            for(int i = 1; i < NFromBeg; i++) {
            t = t->next;
            }
            ListNode* fut = t->next;
            t->next = fut->next;
            delete(fut);
        }
       
        return head;
        
    }
};