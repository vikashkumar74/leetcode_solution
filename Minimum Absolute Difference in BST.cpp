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
void getValue(TreeNode*node,int& minn,int& preValue){
    if(!node)
    return;
   
    getValue(node->left,minn,preValue);
    if(preValue!=-1){
        minn=min(minn,node->val-preValue);
    }
    preValue=node->val;
    getValue(node->right,minn,preValue);
}
    int getMinimumDifference(TreeNode* root) {
        int minn=INT_MAX;
        int preValue=-1;
        getValue(root,minn,preValue);
      return minn;
    }
};
