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
    void rightSideElement(TreeNode*node,int level,vector<int>&result){
       if(!node)
       return;
       if(level==result.size()){
        result.push_back(node->val);
       }
       rightSideElement(node->right,level+1,result);
       rightSideElement(node->left,level+1,result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        rightSideElement(root,0,result);
        return result;
    }
};
