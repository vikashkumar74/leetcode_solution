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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummyNode = new TreeNode(0);
        TreeNode* current = dummyNode;

        
        stack<TreeNode*> stack;
        TreeNode* node = root;

        while (node != nullptr || !stack.empty()) {
         
            while (node != nullptr) {
                stack.push(node);
                node = node->left;
            }
            node = stack.top();
            stack.pop();
            current->right = node;
            node->left = nullptr;  
            current = node;
            node = node->right;
        }
        TreeNode* newRoot = dummyNode->right;
        delete dummyNode;
        return newRoot;
    }
};
