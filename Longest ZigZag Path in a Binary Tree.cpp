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
int zigzag(TreeNode*node,int k,bool isLeft){
    if(node==nullptr){
        return k-1;
    }
    if(isLeft==true){
         return max(zigzag(node->left,1,true), zigzag(node->right,k+1,false));
    }
    else {
        return max(zigzag(node->left,k+1,true), zigzag(node->right,1,false));
    }
}
    int longestZigZag(TreeNode* root) {
        return zigzag(root,0,true);
    }
};
