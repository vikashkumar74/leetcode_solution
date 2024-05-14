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
 TreeNode*tree(vector<int>postorder,int poststart,int postend,vector<int>inorder,int instart,int inend,unordered_map<int,int>&mapp){
    if(poststart>postend||instart>inend)
    return nullptr;
    int rootNode=postorder[postend];
    TreeNode*root=new TreeNode(rootNode);
    int findNode=mapp[rootNode];
    int leftNode=findNode-instart;
    root->left=tree(postorder,poststart,poststart+leftNode-1,inorder,instart,findNode-1,mapp);
    root->right=tree(postorder,poststart+leftNode,postend-1,inorder,findNode+1,inend,mapp);
    return root;
}
    TreeNode* buildTree( vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mapp;
        for(int i=0;i<inorder.size();i++){
            mapp[inorder[i]]=i;
        }
      return  tree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mapp);
    }
};
