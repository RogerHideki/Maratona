class Solution {
public:
    bool makeEqual(vector <string> &words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(26, 0);
        for (auto &word: words) {
            for (auto &c: word) v[c - 'a']++;
        }
        int n = words.size();
        for (auto &amount: v) {
            if (amount % n) return false;
        }
        return true;
    }
};