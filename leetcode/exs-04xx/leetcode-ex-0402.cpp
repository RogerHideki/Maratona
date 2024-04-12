int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k == num.size()) return "0";
        string s;
        for (auto &c: num) {
            while (!s.empty() && (s.back() > c) && k) {
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        while (k--) s.pop_back();
        int i = 0, m = s.size();
        while ((i != m) && s[i] == '0') i++;
        string ans(s.begin() + i, s.end());
        return (ans.empty() ? "0" : ans);
    }
};