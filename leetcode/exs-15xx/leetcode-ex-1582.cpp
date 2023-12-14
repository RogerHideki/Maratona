class Solution {
public:
    int numSpecial(vector <vector<int>> &mat) {
        vector <pair<int, int>> ones;
        int m = mat.size();
        vector<int> onesRow(m, 0);
        int n = mat[0].size();
        vector<int> onesCol(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j]) {
                    if (!onesRow[i] && !onesCol[j]) ones.push_back({i, j});
                    onesRow[i]++;
                    onesCol[j]++;
                }
            }
        }
        int ans = 0;
        for (auto [i, j]: ones) {
            if (onesRow[i] == 1 && onesCol[j] == 1) ans++;
        }
        return ans;
    }
};