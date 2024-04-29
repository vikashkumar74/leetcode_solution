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
int sum(TreeNode*node ,int summ){
    if(node==nullptr)
    return 0;
        summ=(2*summ)+node->val;
    if(node->left==nullptr&&node->right==nullptr){
    return summ;
    }
    return sum(node->left,summ)+sum(node->right,summ);
}
    int sumRootToLeaf(TreeNode* root) {
        return sum(root,0);
    }
};
