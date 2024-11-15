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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildtree(nums, 0,  nums.size()-1);
    }

    private:

    TreeNode* buildtree(vector<int>& nums, int left, int right){
        if(left>right){
            return nullptr;
        }

        int maxindex=left;
        for(int i=left+1;i<=right;i++){
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }

        TreeNode* root = new TreeNode(nums[maxindex]);

        root->left=buildtree(nums, left, maxindex-1);
        root->right=buildtree(nums, maxindex+1, right);

        return root;

    }
};