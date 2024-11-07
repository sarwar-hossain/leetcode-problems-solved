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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;

        while(l1!=NULL){
            s1.push(l1->val);
            l1=l1->next;
        }

        while(l2!=NULL){
            s2.push(l2->val);
            l2=l2->next;
        }

        ListNode* result=NULL;
        int carry=0;

        while(!s1.empty() || !s2.empty() || carry){
            int sum=carry;
            if(!s1.empty()){
               sum+=s1.top();
               s1.pop();
            }

            if(!s2.empty()){
               sum+=s2.top();
               s2.pop();
            }

            ListNode* newnode= new ListNode(sum%10);
            newnode->next=result;
            result=newnode;
            carry=sum/10;
        }

        return result;

    }
};