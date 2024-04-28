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
    void inorderNode(TreeNode* root,vector<int>& result){
        if(!root)
            return;
        inorderNode(root->left,result);
        result.push_back(root->val);
        inorderNode(root->right,result);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        inorderNode(root,result);
        return result;
    }
};
