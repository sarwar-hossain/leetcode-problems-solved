#include<iostream>
//2



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
    ListNode *detectCycle(ListNode *head) {
         if(head==NULL || head->next==NULL){
            return NULL;
        }

        ListNode* fast=head;
        ListNode* slow=head;
        int count=0;

        while(fast!=NULL && fast->next!=NULL){
           
            fast=fast->next->next;
            slow=slow->next;
             if(fast==slow){
                 ListNode* temp=head;
                 while(temp!=slow){
                    temp=temp->next;
                    slow=slow->next;
                 }
                 return temp;
            }
            
        }

        return NULL;
    }
};