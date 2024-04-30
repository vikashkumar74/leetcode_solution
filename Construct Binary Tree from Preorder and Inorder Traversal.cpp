/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* tree(vector<int>& preorder, int startpre, int endpre,
                   vector<int>& inorder, int startin, int endin,
                   unordered_map<int,int>& mapp) {
        if (startpre > endpre || startin > endin)
            return nullptr;
        int rootnum = preorder[startpre];
        TreeNode* root = new TreeNode(rootnum);
        int findNode = mapp[rootnum];
        int numLeft = findNode - startin;
        root->left = tree(preorder, startpre + 1, startpre + numLeft, inorder,
                          startin, findNode - 1, mapp);
        root->right = tree(preorder, startpre + numLeft + 1, endpre, inorder,
                          findNode + 1, endin, mapp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mapp;
        for (int i = 0; i < inorder.size(); i++) {
            mapp[inorder[i]] = i;
        }
        return tree(preorder, 0, preorder.size() - 1, inorder, 0,
                    inorder.size() - 1, mapp);
    }
};
