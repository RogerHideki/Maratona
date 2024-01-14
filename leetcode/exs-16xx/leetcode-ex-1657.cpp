class Solution {
public:
    bool closeStrings(string word1, string word2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v1(26, 0), v2(26, 0);
        int n = word1.size();
        if (n != word2.size()) return false;
        for (int i = 0; i < n; i++) {
            v1[word1[i] - 'a']++;
            v2[word2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (!v1[i] != !v2[i]) return false;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        return v1 == v2;
    }
};