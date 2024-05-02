class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=-1;
       sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<0){
            for(int j=i+1;j<nums.size();j++){
                 if(nums[i]==-(nums[j])){
                    maxi=max(maxi,nums[j]);
                 }
            }
        }
      }
      return maxi;
    }
};
