class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans = matrix;
        for (int j = 0; j < m; j++) {
            int maximum = -1;
            queue<int> q;
            for (int i = 0; i < n; i++) {
                maximum = max(maximum, matrix[i][j]);
                if (matrix[i][j] == -1) q.emplace(i);
            }
            while (!q.empty()) {
                ans[q.front()][j] = maximum;
                q.pop();
            }
        }
        return ans;
    }
};