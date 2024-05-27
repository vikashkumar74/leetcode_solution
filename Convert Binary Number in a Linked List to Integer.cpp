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
    int getDecimalValue(ListNode* head) {
        stack<int>st;
        while(head!=nullptr){
            st.push(head->val);
            head=head->next;
        }
        int dec=0,i=0;
        while(!st.empty()){
           dec=dec+pow(2,i)*st.top();
           i++;
           st.pop();

        }
        return dec;
    }
};
