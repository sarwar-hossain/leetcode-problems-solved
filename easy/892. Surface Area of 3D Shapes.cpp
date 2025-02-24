class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int surfaceArea = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                  
                    surfaceArea += 2;

                    surfaceArea += (i == 0) ? grid[i][j] : max(0, grid[i][j] - grid[i - 1][j]);
                  
                    surfaceArea += (i == n - 1) ? grid[i][j] : max(0, grid[i][j] - grid[i + 1][j]);
                  
                    surfaceArea += (j == 0) ? grid[i][j] : max(0, grid[i][j] - grid[i][j - 1]);
                   
                    surfaceArea += (j == n - 1) ? grid[i][j] : max(0, grid[i][j] - grid[i][j + 1]);
                }
            }
        }

        return surfaceArea;
    }
};