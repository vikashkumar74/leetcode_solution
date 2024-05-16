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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>list;
        list.push({root,{0,0}});
        while(!list.empty()){
            auto q=list.front();
            list.pop();
            TreeNode*temp=q.first;
            int x=q.second.first,y=q.second.second;
            nodes[x][y].insert(temp->val);
            if(temp->left)list.push({temp->left,{x-1,y+1}});
            if(temp->right) list.push({temp->right,{x+1,y+1}});
        }
        vector<vector<int>>result;
        for(auto n:nodes){
            vector<int>vt;
            for(auto item:n.second){
                vt.insert(vt.end(),item.second.begin(),item.second.end());
            }
            result.push_back(vt);
        }
        return result;
    }
};
