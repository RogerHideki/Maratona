class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int, int> m;
        for (auto &num: arr) m[num]++;
        unordered_set<int> s;
        for (auto &it: m) {
            if (s.find(it.second) != s.end()) return false;
            s.insert(it.second);
        }
        return true;
    }
};