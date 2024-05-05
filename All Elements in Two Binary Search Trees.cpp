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
     void pushElement(TreeNode* root,vector<int>&result){
        if(root==nullptr)
        return;
        pushElement(root->left,result);
        result.push_back(root->val);
        pushElement(root->right,result);
     }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>result;
         pushElement(root1,result);
          pushElement(root2,result);
          sort(result.begin(),result.end());
          return result;
    }
};
