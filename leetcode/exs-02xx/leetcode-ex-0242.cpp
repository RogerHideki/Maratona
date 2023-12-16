class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        if (sSize != t.size()) return false;
        vector<int> v(26, 0);
        for (int i = 0; i < sSize; i++) {
            v[t[i] - 'a']++;
            v[s[i] - 'a']--;
        }
        for (auto &freq: v) {
            if (freq) return false;
        }
        return true;
    }
};