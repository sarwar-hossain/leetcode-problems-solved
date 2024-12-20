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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        
        ListNode* mid=findmid(head);

        TreeNode* root=new TreeNode(mid->val);

        if(head==mid){
            return root;
        }

        root->left=sortedListToBST(head);
        root->right=sortedListToBST(mid->next);

        return root;

    }

    private:

     ListNode* findmid(ListNode* head){
        ListNode* fast=head;
          ListNode* slow=head;
           ListNode* prev=nullptr;

           while(fast!=nullptr && fast->next!=nullptr){
                fast=fast->next->next;
                prev=slow;
                slow=slow->next;
           }

           if(prev!=nullptr){
            prev->next=nullptr;
           }

           return slow;
     }
    
};