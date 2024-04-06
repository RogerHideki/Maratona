int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        string ans(1, s[0]);
        for (int i = 1; i < n; i++) {
            if (ans.empty() || ((ans.back() ^ s[i]) != 32)) ans.push_back(s[i]);
            else ans.pop_back();
        }
        return ans;
    }
};