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
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr!=nullptr){
           ListNode* front=curr->next;
           curr->next=prev;
           prev=curr;
           curr=front;
        }
   
        ListNode*temp=prev;
        while(temp!=nullptr&&temp->next!=nullptr){
            if(temp->val<=temp->next->val){
               
                temp=temp->next;
            }
            else{
              
                    temp->next = temp->next->next;
              
            }
        }
       ListNode*result=nullptr;
       while(prev!=nullptr){
        ListNode*front=prev->next;
        prev->next=result;
        result=prev;
        prev=front;
       }

        return result;;
    }
};
