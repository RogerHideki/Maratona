class Solution {
public:
    int maximumLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int sSize = s.size();
        vector <vector<int>> vv(26);
        int amount = 1;
        for (int i = 1; i < sSize; i++) {
            if (s[i - 1] == s[i]) amount++;
            else {
                vv[s[i - 1] - 'a'].emplace_back(amount);
                amount = 1;
            }
        }
        vv[s[sSize - 1] - 'a'].emplace_back(amount);
        int ans = -1;
        for (auto &v: vv) {
            sort(v.begin(), v.end(), greater<int>());
            if (v.size() >= 3) {
                if (v[0] == v[1]) {
                    if (v[0] == v[2]) ans = max(ans, v[0]);
                    else ans = max(ans, v[0] - 1);
                } else if (v[0] == (v[1] + 1)) ans = max(ans, v[1]);
                else ans = max(ans, v[0] - 2);
            } else if (v.size() == 2) {
                if ((v[0] == v[1]) || (v[0] == (v[1] + 1))) ans = max(ans, v[0] - 1);
                else ans = max(ans, v[0] - 2);
            } else if (v.size() == 1) ans = max(ans, v[0] - 2);
        }
        if (!ans) ans = -1;
        return ans;
    }
};