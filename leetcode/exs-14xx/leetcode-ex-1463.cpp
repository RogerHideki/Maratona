class Solution {
public:
    int n, m;
    vector<vector<vector<int>>> memo;
    vector<int> dy = {-1, 0, 1};
    vector<vector<int>> grid;

    int f(int ux, int uy1, int uy2) {
        if (ux == n) return 0;
        if (memo[ux][uy1][uy2] != -1) return memo[ux][uy1][uy2];
        int ans = 0;
        for (auto &dy1: dy) {
            for (auto &dy2: dy) {
                int vy1 = uy1 + dy1;
                int vy2 = uy2 + dy2;
                if (vy1 == -1 || vy1 == m || vy2 == -1 || vy2 == m || vy1 == vy2) continue;
                ans = max(ans, grid[ux][uy1] + grid[ux][uy2] + f(ux + 1, vy1, vy2));
            }
        }
        return memo[ux][uy1][uy2] = ans;
    }

    int cherryPickup(vector<vector<int>> &grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        n = grid.size();
        m = grid[0].size();
        memo.assign(n, vector<vector<int>>(m, vector<int>(m, -1)));
        this->grid = grid;
        return f(0, 0, m - 1);
    }
};