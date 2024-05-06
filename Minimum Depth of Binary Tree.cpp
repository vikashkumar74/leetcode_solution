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
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int leftNode=minDepth(root->left);
        int rightNode=minDepth(root->right);
        if(leftNode==0||rightNode==0)
        return 1+max(leftNode,rightNode);
        return 1+min(leftNode,rightNode);
    }
};
