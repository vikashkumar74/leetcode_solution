// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:

// Input: rowIndex = 0
// Output: [1]
// Example 3:

// Input: rowIndex = 1
// Output: [1,1]
 

// Constraints:

// 0 <= rowIndex <= 33
  //////////////////////////////////////////////////////solution///////////////////////////////////////////
  class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long value=1;
        int row=rowIndex+1;
        vector<int> rowValue;
        rowValue.push_back(1);
        for(int i=1;i<row;i++){
            value=value*(row-i);
            value=value/i;
            rowValue.push_back(value);
        }
        return rowValue;
    }
};
