class Solution {
public:
#define INF INT_MAX / 2

    vector <vector<int>> memo;
    vector<int> prices;
    int n;

    int f(int i, int opt) {
        if (i == n) {
            if (opt == 0) return 0;
            return -INF;
        }
        if (memo[i][opt] != -INF) return memo[i][opt];
        if (!opt) return memo[i][0] = max(f(i + 1, 0), -prices[i] + f(i + 1, 1));
        return memo[i][1] = max(f(i + 1, 1), prices[i]);
    }

    int maxProfit(vector<int> &prices) {
        this->prices = prices;
        n = prices.size();
        memo.assign(n + 1, vector<int>(2, -INF));
        return f(0, 0);
    }
};