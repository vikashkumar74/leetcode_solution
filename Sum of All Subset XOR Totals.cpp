class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int subset_count = 1 << n; 
        int totalXOR = 0;
        for (int num : nums) {
            totalXOR |= num; 
        }

        return totalXOR * subset_count / 2;
    }
};
