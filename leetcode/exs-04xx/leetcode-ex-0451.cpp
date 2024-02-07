class Solution {
public:
    string frequencySort(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<char, int> m1;
        for (auto &c: s) m1[c]++;
        map<int, string> m2;
        for (auto &[key, value]: m1) m2[value] += key;
        string ans = "";
        for (auto it = m2.rbegin(); it != m2.rend(); it++) {
            for (auto &c: it->second) {
                for (int i = 0; i < it->first; i++) ans += c;
            }
        }
        return ans;
    }
};