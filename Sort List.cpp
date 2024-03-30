// Given the head of a linked list, return the list after sorting it in ascending order.

 

// Example 1:


// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
// Example 2:


// Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]
// Example 3:

// Input: head = []
// Output: []
 

// Constraints:

// The number of nodes in the list is in the range [0, 5 * 104].
// -105 <= Node.val <= 105
 

// Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?

////////////////////////////////////////////////////////////////////////////////////////////////////////////solution///////////////////////////////////////////////////////

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
class Solution {
public:
 ListNode* middleNode(ListNode* temp){
    ListNode*slow=temp;
    ListNode*fast=temp->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
 }
  ListNode* mergeSort(ListNode* left,ListNode* right) {
    ListNode*dummyNode=new ListNode(-1);
    ListNode*temp=dummyNode;
    while(left!=nullptr&&right!=nullptr){
       if(left->val>right->val){
        
        temp->next=right;
        temp=right;
        right=right->next;
       }
       else{
        temp->next=left;
        temp=left;
        left=left->next;
       }

    }
    if(left) temp->next=left;
     else   temp->next=right;
     return dummyNode->next;
 
  }
    ListNode* sortList(ListNode* head) {
     
        if(head==nullptr||head->next==nullptr){
            return head;
        }
       
       ListNode* middle= middleNode(head);
        ListNode*right=middle->next;
        middle->next=nullptr;
       ListNode*left=head;
      
        left = sortList(left);
        right= sortList(right);
        return mergeSort(left,right);
    }
};
