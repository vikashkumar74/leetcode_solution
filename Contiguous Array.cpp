// Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

 

// Example 1:

// Input: nums = [0,1]
// Output: 2
// Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
// Example 2:

// Input: nums = [0,1,0]
// Output: 2
// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
 

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.
/////////////////////////////////////////////////solution/////////////////////////////////////////////////////////////////////

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     int maxlength=0;
     int count=0;
     unordered_map<int,int> mapp;
     mapp[0]=-1;
     for(int i=0;i<nums.size();i++){
        count+=(nums[i]==1)?1:-1;
        if(mapp.find(count)!=mapp.end()){
            maxlength=max(maxlength,(i-mapp[count]));
        }
        else{
        mapp[count]=i; 
        }
     }
     return maxlength;
    }
};
