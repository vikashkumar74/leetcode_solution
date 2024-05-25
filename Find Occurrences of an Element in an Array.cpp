class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>result;
        unordered_map<int,vector<int>>mapp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mapp[x].push_back(i);
            }
        }
        for(int i=0;i<queries.size();i++){
            int size=mapp[x].size();
            if(queries[i]<=size){
                result.push_back(mapp[x][queries[i]-1]);
            }
            else{
                result.push_back(-1);
            }
        }
        return result;
    }
};
