/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode* next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0,d=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            l1++;
            temp1=temp1->next;
        }
        
         while(temp2!=NULL){
            l2++;
            temp2=temp2->next;
        }

        ListNode* ptr1;
        ListNode* ptr2;

        if(l1>l2){
            ptr1=headA;
            ptr2=headB;
            d=l1-l2;
        }
        else{
            ptr1=headB;
            ptr2=headA;
            d=l2-l1;
        }

        while(d--){
            ptr1=ptr1->next;
            if(ptr1==NULL){
                return NULL;
            }
        }

        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }

     return NULL;

    }
};