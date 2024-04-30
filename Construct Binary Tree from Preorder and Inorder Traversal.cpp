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
TreeNode*tree(TreeNode*preorder,startpre,endpre,TreeNode*inorder,startin,endin,unordered_map<int,int>mapp){
    if(startpre>endpre||startin>endin)
    return nullptr;
   int root=preorder[startpre];
    TreeNode*root=new TreeNode(root);
    int findNode=mapp[root];
    int numLeft=findNode-startin;
    root->left=tree(preorder,startpre+1,startpre+numLeft,inorder,startin,findNode-1,mapp);
  root->left=tree(preorder,startpre+numLeft+1,endpre,inorder,findNode+1,endin,mapp);
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mapp;
        for(int i=0;i<inorder.size();i++){
            mapp[inorder[i]]=i;
        }
     return tree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mapp);
    }
};
