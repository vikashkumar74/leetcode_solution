/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
TreeNode*createTree(vector<int>nums,int start,int end){
    if(start>end)
    return nullptr;
    int mid=(start+end)/2;
    TreeNode*root=new TreeNode(nums[mid]);
    root->left=createTree(nums,start,mid-1);
    root->right=createTree(nums,mid+1,end);
    return root;

}
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>temp;
        ListNode*curr=head;
        while(curr!=nullptr){
          temp.push_back(curr->val);
          curr=curr->next;
        }
        return createTree(temp,0,temp.size()-1);
    }
};
