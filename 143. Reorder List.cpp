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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL ){
            return ;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
              fast=fast->next->next;
              slow=slow->next;
        }

        ListNode* prevptr=NULL;
        ListNode* currptr=slow;
        ListNode* nextptr=NULL;
        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }

        ListNode* first=head;
        ListNode* second=prevptr;

        while(second->next!=NULL){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }
    }
};