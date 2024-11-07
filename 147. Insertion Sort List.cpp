#include<iostream>
//2


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
    ListNode* insertionSortList(ListNode* head) {
       if(head==NULL || head->next==NULL){
        return head;
       }

       ListNode dummy(0);
       dummy.next=head;
       ListNode* stemp=head;

       while(stemp->next!=NULL){
        if(stemp->val<=stemp->next->val){
            stemp=stemp->next;
        }else{
            ListNode* temp=stemp->next;
            stemp->next=temp->next;

            ListNode* prev=&dummy;

            while(prev->next->val<temp->val){
                prev=prev->next;
            }

            temp->next=prev->next;
            prev->next=temp;
        }
        
       }
       return dummy.next;
    }
};