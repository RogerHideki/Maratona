class Solution {
public:
    vector<vector<int>> memo;
    string s;

    int f(int i, int j) {
        if (i >= j) return 1;
        if (memo[i][j] != -1) return memo[i][j];
        if (s[i] == s[j]) return memo[i][j] = f(i + 1, j - 1);
        return memo[i][j] = 0;
    }

    int countSubstrings(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = s.size();
        int ans = 0;
        memo.assign(n, vector<int>(n, -1));
        this->s = s;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) ans += f(i, j);
        }
        return ans;
    }
};