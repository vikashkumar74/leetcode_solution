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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root)
        return result;
        queue<TreeNode*>q;
        q.push(root);
        bool isLeftRight=true;
        while(!q.empty()){
            vector<int>elements;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                elements.push_back(temp->val);
            }
          if(!isLeftRight){
           reverse(elements.begin(),elements.end());
        
        }
        result.push_back(elements);
        isLeftRight=!isLeftRight;
        }
        return result;
    }
};
