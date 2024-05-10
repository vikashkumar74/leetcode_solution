class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float> temp;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
               temp.push_back(arr[i]/(float)arr[j]);
            }
        }
        sort(temp.begin(),temp.end());
        vector<int>result;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
               if((arr[i]/(float)arr[j])==temp[k-1]){
               result.push_back(arr[i]);
               result.push_back(arr[j]);
               break;
            }
            }
        }
        return result;
    }
};
