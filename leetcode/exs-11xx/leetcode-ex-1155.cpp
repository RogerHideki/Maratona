class Solution {
public:
    int k;
    vector <vector<int>> memo;

    int f(int n, int target) {
        if (!n && !target) return 1;
        if (target > (n * k) || n > target) return 0;
        if (memo[n][target]) return memo[n][target];
        for (int i = 1; i <= k; i++) {
            if (target >= i) memo[n][target] = (memo[n][target] + f(n - 1, target - i)) % 1000000007;
        }
        return memo[n][target];
    }

    int numRollsToTarget(int n, int k, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->k = k;
        memo.assign(n + 1, vector<int>(target + 1, 0));
        return f(n, target);
    }
};