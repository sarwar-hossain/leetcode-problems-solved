#include<iostream>
//


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
    ListNode* partition(ListNode* head, int x) {
       
        ListNode lessHead(0), greaterHead(0);
        ListNode* less = &lessHead;
        ListNode* greater = &greaterHead;

       
        while (head != NULL) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        greater->next = NULL; 
        less->next = greaterHead.next; 

        return lessHead.next;
    }
};