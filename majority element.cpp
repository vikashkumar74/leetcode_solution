// -- Given an array nums of size n, return the majority element.

// -- The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// -- Example 1:

// -- Input: nums = [3,2,3]
// -- Output: 3
// -- Example 2:

// -- Input: nums = [2,2,1,1,1,2,2]
// -- Output: 2
 

// -- Constraints:

// -- n == nums.length
// -- 1 <= n <= 5 * 104
// -- -109 <= nums[i] <= 109
/////////////////////////////////////////////// solution///////////////////////////////////////////////////////
class Solution {
public:
    int largest=0;
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
for(int i=0;i<nums.size();i++){
    if(mapp[nums[i]]>nums.size()/2)
        return nums[i];
}
        return -1;
    }
};
