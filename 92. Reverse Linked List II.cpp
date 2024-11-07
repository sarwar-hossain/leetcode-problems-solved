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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int m=left, n=right;
        if(head==NULL || m==n){
            return head;
        }
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;

        for(int i=1;i<m;i++){
            prev=prev->next;
        }

        ListNode* start=prev->next;
        ListNode* than=start->next;

        for(int i=0;i<n-m;i++){
            start->next=than->next;
            than->next=prev->next;
            prev->next=than;
            than=start->next;
        }

        return dummy.next;
    }
};