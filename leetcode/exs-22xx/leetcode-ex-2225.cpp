class Solution {
public:
    vector <vector<int>> findWinners(vector <vector<int>> &matches) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<int, int> m;
        for (auto &match: matches) {
            m[match[0]] += 0;
            m[match[1]] += 1;
        }
        vector <vector<int>> ans(2);
        for (auto &[key, value]: m) {
            if (value == 0) ans[0].emplace_back(key);
            else if (value == 1) ans[1].emplace_back(key);
        }
        return ans;
    }
};