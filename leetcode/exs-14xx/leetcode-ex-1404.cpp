int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numSteps(string s) {
        int i = s.size() - 1, ans = 0;
        while (s[i] == '0') {
            ans++;
            i--;
        }
        while (i > 0) {
            s[i] = '1';
            while ((i != -1) && (s[i] == '1')) {
                i--;
                ans++;
            }
            ans++;
        }
        return ans;
    }
};