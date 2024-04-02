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
    ListNode* insertionSortList(ListNode* head) {
    if (!head || !head->next)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevSorted = head; 
        ListNode* currUnsorted = head->next; 

        while (currUnsorted) {
            if (prevSorted->val <= currUnsorted->val) {
                prevSorted = prevSorted->next;
            } else {
                ListNode* prev = dummy;
                while (prev->next->val <= currUnsorted->val)
                    prev = prev->next;
                
                prevSorted->next = currUnsorted->next;
                currUnsorted->next = prev->next;
                prev->next = currUnsorted;
            }
            currUnsorted = prevSorted->next;
        }

        return dummy->next;
    }
};
