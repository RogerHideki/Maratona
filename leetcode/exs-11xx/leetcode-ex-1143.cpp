class Solution {
public:
    string text1, text2;
    int n1, n2;
    vector <vector<int>> memo;

    int f(int i, int j) {
        if (i == n1 || j == n2) return 0;
        if (memo[i][j]) return memo[i][j];
        int ans = 0;
        for (int k = j; k < n2; k++) {
            if (text1[i] == text2[k]) {
                ans = max(ans, 1 + f(i + 1, k + 1));
                break;
            }
        }
        return memo[i][j] = max(ans, f(i + 1, j));
    }

    int longestCommonSubsequence(string text1, string text2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->text1 = text1;
        this->text2 = text2;
        n1 = text1.size();
        n2 = text2.size();
        memo.assign(n1, vector<int>(n2));
        return f(0, 0);
    }
};