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
void preOrder(TreeNode*root,vector<int>&vt){
    if(root==nullptr){
        return;
    }
    vt.push_back(root->val);
    preOrder(root->left,vt);
    preOrder(root->right,vt);
}
    void flatten(TreeNode* root) {
          vector<int>vt;
          preOrder(root,vt);
          TreeNode*curr=root;
          for(int i=1;i<vt.size();i++){
            curr->left = nullptr;
            curr->right=new TreeNode(vt[i]);
            curr=curr->right;
          }
    
    }
};
