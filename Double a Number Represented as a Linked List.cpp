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
    ListNode* doubleIt(ListNode* head) {
        ListNode*prev=nullptr;
        ListNode*curr=head;
       while(curr!=nullptr){
        ListNode*front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
       }
       ListNode*temp=prev;
       int divident=0;
       int rem=0;
       while(temp!=nullptr){
         rem=(temp->val*2)%10 + divident;
        divident=temp->val*2/10;
        temp->val=rem;
        temp=temp->next;
       }
       if(rem!=0){
        prev->next=new Linke
       }
       return  prev;
    }
};
