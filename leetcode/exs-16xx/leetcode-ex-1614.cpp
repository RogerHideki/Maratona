int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxDepth(string s) {
        int acc = 0, ans = 0;
        for (auto &c: s) {
            if (c == ')') acc--;
            else if (c == '(') {
                acc++;
                ans = max(ans, acc);
            }
        }
        return ans;
    }
};