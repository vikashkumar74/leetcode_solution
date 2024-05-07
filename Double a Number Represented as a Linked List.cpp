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
       
       while(temp!=nullptr){
         int rem=(temp->val*2)%10 + divident;
        divident=temp->val*2/10;
        temp->val=rem;
        if(divident!=0&&temp->next==nullptr){
            temp->next=new ListNode(divident);
            break;
        }
        temp=temp->next;
       }
      ListNode*result=nullptr;
      while(prev!=nullptr){
        ListNode*front=prev->next;
        prev->next=result;
        result=prev;
        prev=front;
      }

       return  result;
    }
};
