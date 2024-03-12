// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

// Constraints:

// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 106

///////////////////////////////////////////////////////////////////////////////////////////solution//////////////////////////////////////////////

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int i=0,j=0;
        int indexel1=-1;
        int indexel2=-1;
        int index1=n/2;
        int index2=index1-1;
        int count=0;
       
        while(i<n1&&j<n2){
            if(nums1[i]<nums2[j]){
            if(count==index1) indexel1=nums1[i];
            if(count==index2) indexel2=nums1[i];
            count++;
            i++;
            }
            else{
                if(count==index1) indexel1=nums2[j];
                if(count==index2) indexel2=nums2[j];
                count++;
                j++;
            }
        }
        while(i<n1){
              if(count==index1) indexel1=nums1[i];
            if(count==index2) indexel2=nums1[i];
            count++;
            i++;
        }
        while( j<n2){
 if(count==index1) indexel1=nums2[j];
                if(count==index2) indexel2=nums2[j];
                count++;
                j++;
        }
         if(n%2==1){
            return indexel1;
        }
        return (double)((double)(indexel1+indexel2))/2.0;
    }
};
