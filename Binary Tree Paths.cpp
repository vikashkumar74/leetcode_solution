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
void traverse(TreeNode*node,string path,vector<string>&paths){
    if(node->left==nullptr&&node->right==nullptr){
        paths.push_back(path+to_string(node->val));
    }
    else{
        if(node->left){
            traverse(node->left,path+to_string(node->val)+"->",paths);
        }
        if(node->right){
            traverse(node->right,path+to_string(node->val)+"->",paths);
        }
    }
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        traverse(root,"",paths);
        return paths;
    }
};
