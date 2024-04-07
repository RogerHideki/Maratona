int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string s;
    int n;
    vector<vector<int>> memo;

    bool f(int i, int acc) {
        if (acc < 0) return false;
        if (acc > (n - i)) return false;
        if (i == n) return true;
        if (memo[i][acc] != -1) return memo[i][acc];
        bool ans = false;
        if (s[i] == '(') ans = f(i + 1, acc + 1);
        else if (s[i] == ')') ans = f(i + 1, acc - 1);
        else if (f(i + 1, acc + 1)) ans = true;
        else if (f(i + 1, acc - 1)) ans = true;
        else if (f(i + 1, acc)) ans = true;
        return memo[i][acc] = ans;
    }

    bool checkValidString(string s) {
        this->s = s;
        n = s.size();
        memo.assign(n, vector<int>(n, -1));
        return f(0, 0);
    }
};