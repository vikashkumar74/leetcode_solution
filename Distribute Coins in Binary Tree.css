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
int moves=0;
int  distribution(TreeNode*node){
if(!node)
return 0;
    int left=distribution(node->left);
    int right=distribution(node->right);
    int excess=node->val+left+right-1;
    moves+=abs(excess);
   return excess;
}
    int distributeCoins(TreeNode* root) {
        distribution(root);
        return moves;
    }
};
