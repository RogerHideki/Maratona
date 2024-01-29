class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 1; i < n; i++) matrix[i][0] += matrix[i - 1][0];
        for (int j = 1; j < m; j++) matrix[0][j] += matrix[0][j - 1];
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) matrix[i][j] += matrix[i][j - 1] + matrix[i - 1][j] - matrix[i - 1][j - 1];
        }
        int ans = 0;
        for (int i1 = 0; i1 < n; i1++) {
            for (int j1 = 0; j1 < m; j1++) {
                for (int i2 = i1; i2 < n; i2++) {
                    for (int j2 = j1; j2 < m; j2++) {
                        int q1 = ((i1 != 0) ? matrix[i1 - 1][j2] : 0);
                        int q2 = (((i1 != 0) && (j1 != 0)) ? matrix[i1 - 1][j1 - 1] : 0);
                        int q3 = ((j1 != 0) ? matrix[i2][j1 - 1] : 0);
                        if (target == (matrix[i2][j2] - q1 - q3 + q2)) ans++;
                    }
                }
            }
        }
        return ans;
    }
};