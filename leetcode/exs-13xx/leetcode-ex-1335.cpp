class Solution {
public:
#define INF 10001

    vector<int> jobDifficulty;
    int n;
    vector <vector<int>> memo;

    int f(int i, int d) {
        if (d == 0) return (i == n) ? 0 : INF;
        if ((i + d) > n) return INF;
        if (memo[i][d] != INF) return memo[i][d];
        int maxDifficulty = 0;
        int ans = INF;
        for (int j = i; j < n; j++) {
            maxDifficulty = max(maxDifficulty, jobDifficulty[j]);
            ans = min(ans, maxDifficulty + f(j + 1, d - 1));
        }
        return memo[i][d] = ans;
    }

    int minDifficulty(vector<int> &jobDifficulty, int d) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->jobDifficulty = jobDifficulty;
        n = jobDifficulty.size();
        memo.assign(n, vector<int>(d + 1, INF));
        int ans = f(0, d);
        return (ans != INF) ? ans : -1;
    }
};