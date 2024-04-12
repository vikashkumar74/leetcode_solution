class Solution {
public:
    int trap(vector<int>& height) {
        int trapped_water=0;
        int left=0;
        int right=height.size()-1;
        int max_left=0,max_right=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=max_left){
                    max_left=height[left];
                }
                else{
                    trapped_water +=max_left-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=max_right){
                    max_right=height[right];
                }
                else{
                    trapped_water+=max_right-height[right];
                }
                right--;
            }

        }
        
        return trapped_water;
    }
};
