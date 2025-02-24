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
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        // Base cases
        if (!t1 && !t2) return true; // Both nodes are null
        if (!t1 || !t2) return false; // One node is null
        if (t1->val != t2->val) return false; // Values are different

        // Recursively check if the left subtree of t1 is a mirror of the right subtree of t2, and vice versa
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true; // An empty tree is symmetric
        return isMirror(root->left, root->right);
    }
};
