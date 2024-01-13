class Solution {
public:
    int minSteps(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(26, 0);
        for (auto &c: s) v[c - 'a']++;
        for (auto &c: t) {
            int hash = c - 'a';
            if (v[hash]) v[hash]--;
        }
        int ans = 0;
        for (auto &amount: v) ans += amount;
        return ans;
    }
};