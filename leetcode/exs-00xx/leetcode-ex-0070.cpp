class Solution {
public:
    vector<int> memo;
    int n;

    int f(int i) {
        if (i == n) return 1;
        if (i > n) return 0;
        if (memo[i]) return memo[i];
        return memo[i] = f(i + 1) + f(i + 2);
    }

    int climbStairs(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->n = n;
        memo.assign(n, 0);
        return f(0);
    }
};