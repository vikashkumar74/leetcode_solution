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
int findsumofTilt(TreeNode*root,int& totalTilt){
    if(!root)
    return 0;
    int leftSum=findsumofTilt(root->left,totalTilt);
    int rightSum=findsumofTilt(root->right,totalTilt);
    totalTilt+=abs(leftSum-rightSum);
    return root->val+leftSum+rightSum;
}
    int findTilt(TreeNode* root) {
       int totalTilt=0;
        findsumofTilt(root,totalTilt);
            return totalTilt;
        
    }
};
