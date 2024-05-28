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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int components = 0;
        bool in_component = false;

        while (head != nullptr) {
            if (num_set.find(head->val) != num_set.end()) {
                if (!in_component) {
                    in_component = true;
                    components++;
                }
            } else {
                in_component = false;
            }
            head = head->next;
        }
        
        return components;
    }
};
