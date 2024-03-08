// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
// Example 3:

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23
 

// Constraints:

// 1 <= piles.length <= 104
// piles.length <= h <= 109
// 1 <= piles[i] <= 109
///////////////////////////////////////////////////////////////////////////////////////////////solution//////////////////////////////////////////////////////////////////////////////
class Solution {
public:
  int maxx(vector<int>p){
      int n=p.size();
      long long max=p[0];
      for(int i=0;i<n;i++){
         if(p[i]>max){
             max=p[i];
         } 
      }
      return max;
  }
  int hours(vector<int> p,int mid){
      long long h=0;
      int n=p.size();
      for(int i=0;i<n;i++){
          h+=ceil((double)p[i]/(double)mid);
      }
      return h;
  }
    int minEatingSpeed(vector<int>& piles, int h) {
       long long start=1;
     long long end=maxx(piles);
    
       while(start<end){
        long long mid = start + (end - start) / 2;
           long long totalHours=hours(piles,mid);
          
            if(totalHours>h){
               
                start = mid + 1;
           }
           else {
               end = mid;
           }
       }
        return start;
    }
};
