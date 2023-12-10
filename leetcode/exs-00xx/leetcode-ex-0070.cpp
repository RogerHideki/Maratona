class Solution {
public:
    int memo[46];
    int n;

    int f(int i) {
        if (i == n) return 1;
        if (i > n) return 0;
        if (memo[i] != -1) return memo[i];
        return memo[i] = f(i + 1) + f(i + 2);
    }

    int climbStairs(int n) {
        this->n = n;
        memset(memo, -1, sizeof memo);
        return f(0);
    }
};