class Solution {
public:
    string s;
    int n;
    vector <vector<int>> memo;

    int count(int amount) {
        if (amount >= 100) return 3;
        if (amount >= 10) return 2;
        if (amount >= 2) return 1;
        return 0;
    }

    int f(int i, int k) {
        if (k < 0) return 100;
        if (i == n) return 0;
        if (memo[i][k] != -1) return memo[i][k];
        int ans = f(i + 1, k - 1);
        int j;
        int amountDeletions = 0;
        int amountIdentical = 1;
        for (j = i + 1; j < n; j++) {
            if (s[i] != s[j]) {
                if (k == amountDeletions) break;
                ans = min(ans, 1 + count(amountIdentical) + f(j, k - amountDeletions));
                amountDeletions++;
            } else amountIdentical++;
        }
        return memo[i][k] = min(ans, 1 + count(amountIdentical) + f(j, k - amountDeletions));
    }

    int getLengthOfOptimalCompression(string s, int k) {
        this->s = s;
        n = s.size();
        memo.assign(n, vector<int>(n + 1, -1));
        return f(0, k);
    }
};