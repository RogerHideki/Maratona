class Solution {
public:
    vector <vector<int>> onesMinusZeros(vector <vector<int>> &grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> diffsRow(m, -n);
        vector<int> diffsCol(n, -m);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    diffsRow[i] += 2;
                    diffsCol[j] += 2;
                }
            }
        }
        vector <vector<int>> diff(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) diff[i][j] = diffsRow[i] + diffsCol[j];
        }
        return diff;
    }
};