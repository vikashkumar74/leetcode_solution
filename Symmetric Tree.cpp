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
bool istrue(TreeNode*leftTree,TreeNode*rightTree){
    if(leftTree!=nullptr&&rightTree==nullptr||rightTree!=nullptr&&leftTree==nullptr)
    return false;
    if(leftTree==nullptr&&rightTree==nullptr){
        return true;
    }
    if(leftTree->val==rightTree->val&&istrue(leftTree->left,rightTree->right)&&istrue(leftTree->right,rightTree->left)){
        return true;
    }
    return false;
}
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
        return true;
          TreeNode*tree1=root->left;
        TreeNode*tree2=root->right;
        return istrue(tree1,tree2);
    }
};
