class Solution {
public:
    int kInversePairs(int n, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        const int MOD = 1000000007;
        vector<vector<int>> memo(n + 1, vector<int>(k + 1, 0));
        for (int i = 1; i <= n; i++) memo[i][0] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                memo[i][j] = (memo[i - 1][j] + memo[i][j - 1]) % MOD;
                if (j >= i) memo[i][j] = (memo[i][j] - memo[i - 1][j - i]) % MOD;
                if (memo[i][j] == 1) break;
            }
        }
        return memo[n][k] + ((memo[n][k] < 0) ? MOD : 0);
    }
};