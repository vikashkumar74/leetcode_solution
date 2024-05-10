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
int maxCount = 0;
    int currCount = 0;
    int prevVal = INT_MIN;
    vector<int> modes;
void nodes(TreeNode*root){
    if(root==nullptr)
    return;
     nodes(root->left);

        if (root->val == prevVal) {
            currCount++;
        } else {
            currCount = 1;
            prevVal = root->val;
        }

        if (currCount == maxCount) {
            modes.push_back(root->val);
        } else if (currCount > maxCount) {
            maxCount = currCount;
            modes = {root->val};
        }

        nodes(root->right);
}
    vector<int> findMode(TreeNode* root) {
     nodes(root);
     return modes;
    }
};
