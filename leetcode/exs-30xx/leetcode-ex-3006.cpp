class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v1, v2;
        size_t idx = -1;
        do {
            idx = s.find(a, idx + 1);
            if (idx != string::npos) v1.emplace_back(idx);
        } while (idx != string::npos);
        idx = -1;
        do {
            idx = s.find(b, idx + 1);
            if (idx != string::npos) v2.emplace_back(idx);
        } while (idx != string::npos);
        if (!v2.size()) return {};
        vector<int> ans = {};
        for (auto &idxA: v1) {
            auto it = lower_bound(v2.begin(), v2.end(), idxA);
            if ((it != v2.end()) && (*it - idxA <= k)) {
                ans.emplace_back(idxA);
                continue;
            }
            if (it == v2.begin()) continue;
            it--;
            if ((it != v2.end()) && (idxA - *it <= k)) ans.emplace_back(idxA);
        }
        return ans;
    }
};