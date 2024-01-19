class Solution {
public:
    int n;
    vector <vector<int>> matrix, memo;

    int f(int i, int j) {
        if (i == n) return matrix[i][j];
        if (memo[i][j] != 9901) return memo[i][j];
        int ans = f(i + 1, j);
        if (j != 0) ans = min(ans, f(i + 1, j - 1));
        if (j != n) ans = min(ans, f(i + 1, j + 1));
        return memo[i][j] = matrix[i][j] + ans;
    }

    int minFallingPathSum(vector <vector<int>> &matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        n = matrix.size();
        this->matrix = matrix;
        memo.assign(n, vector<int>(n, 9901));
        n--;
        int ans = f(0, 0);
        for (int j = 1; j <= n; j++) ans = min(ans, f(0, j));
        return ans;
    }
};