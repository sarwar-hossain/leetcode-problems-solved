#include<iostream>
//2


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
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }

    private:

    int dfs(TreeNode* root,int sum){
        if(root==nullptr){
            return 0;
        }

        sum=sum*10+root->val;

        if(root->left==nullptr && root->right==nullptr){
            return sum;
        }

        int leftsum=dfs(root->left,sum);
        int rightsum=dfs(root->right,sum);
        return leftsum+rightsum;
    }
};