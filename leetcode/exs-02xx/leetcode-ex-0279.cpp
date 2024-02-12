class Solution {
public:
#define INF 10000

    int n;
    vector<int> memo, squares;

    int f(int sum) {
        if (sum == n) return 0;
        if (sum > n) return INF;
        if (memo[sum]) return memo[sum];
        int ans = INF;
        for (auto &square: squares) ans = min(ans, 1 + f(sum + square));
        return memo[sum] = ans;
    }

    int numSquares(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->n = n;
        memo.assign(n, 0);
        for (int i = 1; i * i <= n; i++) squares.emplace_back(i * i);
        return f(0);
    }
};