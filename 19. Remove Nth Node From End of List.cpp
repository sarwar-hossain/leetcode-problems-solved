#include<iostream>
//2


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            head = NULL;
            return NULL;
        }
        ListNode* p = head;
        int size = 0;
        while(p!=NULL){
            p = p->next;
            size++;
        }
        if(size-n-1<0)
            return head->next;
        int i = 0;
        p=head;
        while(i<size-n-1){
            p = p->next;
            i++;
        }
        p->next = p->next->next;
        return head;
    }
};