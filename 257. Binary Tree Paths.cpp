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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (!root) return paths;

        findPaths(root, "", paths);
        return paths;
    }

private:
    void findPaths(TreeNode* node, string path, vector<string>& paths) {
        path += to_string(node->val);

        if (!node->left && !node->right) {
            paths.push_back(path);
            return;
        }

        if (node->left) findPaths(node->left, path + "->", paths);
        if (node->right) findPaths(node->right, path + "->", paths);
    }
};


/*

        1
      /  \
     2    3
      \
       5


Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]
Example 2:

Input: root = [1]
Output: ["1"]

*/