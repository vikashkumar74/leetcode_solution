class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        if(col==0 || row==0){
            return false;
    }
        for(int i=0;i<row;i++){
            for(int j=0;j<colu;j++){
                if(( i+1<row && grid[i][j]!=grid[i+1][j]) || (j+1<col &&  grid[i][j]==grid[i][j+1])){
                    return false;
                }
            }
        }
      
        return true;
    }
};
