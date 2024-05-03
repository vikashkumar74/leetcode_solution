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
   int sum(TreeNode*node,int& maxi){
    if(node==nullptr){
        return 0;
    }
    int ln= max(0,sum(node->left,maxi));
    int rn= max(0,sum(node->right,maxi));
    maxi=max(maxi,ln+rn+node->val);
    return max(ln,rn)+node->val;
   }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
         sum(root,maxi);
         return maxi;
    }
};
