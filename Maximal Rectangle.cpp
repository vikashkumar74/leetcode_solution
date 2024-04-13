class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> heights(m, vector<int>(n, 0));
    int maxArea = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == '1') {
                heights[i][j] = (i == 0 ? 1 : heights[i - 1][j] + 1);
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        stack<int> s;
        for (int j = 0; j <= n; ++j) {
            int h = (j == n ? 0 : heights[i][j]);
            if (s.empty() || h >= heights[i][s.top()]) {
                s.push(j);
            } else {
                while (!s.empty() && h < heights[i][s.top()]) {
                    int height = heights[i][s.top()];
                    s.pop();
                    int width = (s.empty() ? j : j - s.top() - 1);
                    maxArea = max(maxArea, height * width);
                }
                s.push(j);
            }
        }
    }
    return maxArea;
    }
};
