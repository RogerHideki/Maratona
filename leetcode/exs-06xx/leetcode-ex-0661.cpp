class Solution {
public:
    vector <vector<int>> imageSmoother(vector <vector<int>> &img) {
        vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
        vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};
        int m = img.size();
        int n = img[0].size();
        vector <vector<int>> ans(m, vector<int>(n));
        for (int ux = 0; ux < m; ux++) {
            for (int uy = 0; uy < n; uy++) {
                ans[ux][uy] = img[ux][uy];
                int nCells = 1;
                for (int i = 0; i < 8; i++) {
                    int vx = ux + dx[i];
                    int vy = uy + dy[i];
                    if (vx < 0 || vx >= m || vy < 0 || vy >= n) continue;
                    ans[ux][uy] += img[vx][vy];
                    nCells++;
                }
                ans[ux][uy] /= nCells;
            }
        }
        return ans;
    }
};