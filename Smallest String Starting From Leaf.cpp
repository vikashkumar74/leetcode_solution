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

 string dfs(TreeNode* node, string suffix) {
        if (!node) return "|"; 
        char ch = 'a' + node->val;
        suffix = ch + suffix;
        if (!node->left && !node->right) return suffix;

        string left = dfs(node->left, suffix);
        string right = dfs(node->right, suffix);
        return min(left, right);
 }
    string smallestFromLeaf(TreeNode* root) {
            return dfs(root, "");
    
    }
};
