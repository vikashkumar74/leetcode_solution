// Given the head of a linked list, rotate the list to the right by k places.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:


// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
 

// Constraints:

// The number of nodes in the list is in the range [0, 500].
// -100 <= Node.val <= 100
// 0 <= k <= 2 * 109

///////////////////////////////////////////////////////////solution///////////////////////////////////////////

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
ListNode*findNode(ListNode*temp,int k){
   
    int count=1;
    while(temp!=nullptr){
    if(count==k)
    return temp;
    count++;
    temp=temp->next;
    }
    return temp;

}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||k==0){
        return head;
    }
    ListNode*temp=head;
    int count=1;
    while(temp->next!=nullptr){
           temp=temp->next;
        count++;
     
    }
    if(k%count==0)
    return head;
    k=k%count;
    temp->next=head;
    ListNode* newNode=findNode(head,count-k);
    head=newNode->next;
    newNode->next=nullptr;
        return head;
    }
};
