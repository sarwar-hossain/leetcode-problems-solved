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
    private:
    void dfs(TreeNode* root, vector<int>& v){
        if(root==nullptr){
            return ;
        }

        if(root->left==nullptr && root->right==nullptr){
            v.push_back(root->val);
        }

        dfs(root->left, v);
        dfs(root->right, v);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        dfs(root1, v1);
        dfs(root2, v2);

        return v1==v2;
    }
};