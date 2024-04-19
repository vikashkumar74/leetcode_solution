class Solution {
public:
    void floodFill(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
         return;
        grid[i][j] = '0';         
        floodFill(grid, i + 1, j);
        floodFill(grid, i - 1, j);
        floodFill(grid, i, j + 1);
        floodFill(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
         if (grid.empty() || grid[0].empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int numIslands = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    numIslands++;
                    floodFill(grid, i, j);
                }
            }
        }

        return numIslands;
    }
};
