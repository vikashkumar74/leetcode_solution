// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

// Example 1:


// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]
// Example 2:

// Input: head = [5], left = 1, right = 1
// Output: [5]
 

// Constraints:

// The number of nodes in the list is n.
// 1 <= n <= 500
// -500 <= Node.val <= 500
// 1 <= left <= right <= n
 

// Follow up: Could you do it in one pass?

/////////////////////////////////////////////////////////////////////////////////////////////////solution///////////////////////////////////////////////////////////////////////////////////////////////////////////

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> st;
        ListNode*temp=head;
        left=left-1;
        int l=left;
        while(left--){
           temp=temp->next;
        }
        ListNode*newtemp=temp;
        int r=right-l;
        int s=r;
        while(r--){
          st.push(temp->val);
          temp=temp->next;
        }
        temp=newtemp;
        while(s--){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
    }
};
