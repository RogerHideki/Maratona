int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for (int i = s.size() - 1; i != 0; i--) ans += abs(s[i - 1] - s[i]);
        return ans;
    }
};