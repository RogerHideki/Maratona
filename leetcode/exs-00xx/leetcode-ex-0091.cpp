class Solution {
public:
    string s;
    int sSize;
    vector<int> memo;

    int f(int i) {
        if (i == sSize) return 1;
        if (s[i] == '0') return 0;
        if (memo[i] != -1) return memo[i];
        int ans = f(i + 1);
        if (i + 1 < sSize && (s[i] == '1' || (s[i] == '2' && s[i + 1] >= '0' && s[i + 1] <= '6'))) ans += f(i + 2);
        return memo[i] = ans;
    }

    int numDecodings(string s) {
        this->s = s;
        sSize = s.size();
        memo.assign(sSize, -1);
        return f(0);
    }
};