class Solution {
public:
    int minimumPushes(string word) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(26, 0);
        for (auto &c: word) v[c - 'a']++;
        sort(v.begin(), v.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < 8; i++) ans += v[i];
        for (int i = 8; i < 16; i++) ans += (2 * v[i]);
        for (int i = 16; i < 24; i++) ans += (3 * v[i]);
        for (int i = 24; i < 26; i++) ans += (4 * v[i]);
        return ans;
    }
};