class Solution {
public:
    int m, n;
    vector<vector<vector<int>>> memo;
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};

    int f(int ux, int uy, int remainingMoves) {
        if (ux == -1 || ux == m || uy == -1 || uy == n) return 1;
        if (!remainingMoves) return 0;
        if (memo[ux][uy][remainingMoves] != -1) return memo[ux][uy][remainingMoves];
        int ans = 0;
        for (int i = 0; i < 4; i++) ans = (ans + f(ux + dx[i], uy + dy[i], remainingMoves - 1)) % 1000000007;
        return memo[ux][uy][remainingMoves] = ans;
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->m = m;
        this->n = n;
        memo.assign(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return f(startRow, startColumn, maxMove);
    }
};