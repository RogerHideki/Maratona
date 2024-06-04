int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(58, 0);
        for (auto &c: s) v[c - 'A']++;
        int n = s.size(), ans = n;
        for (auto &amount: v) {
            if (amount & 1) ans--;
        }
        return ans + (ans != n);
    }
};