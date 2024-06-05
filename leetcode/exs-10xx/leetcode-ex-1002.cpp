int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<string> commonChars(vector<string> &words) {
        vector<int> v1(26, 0);
        for (auto &c: words[0]) v1[c - 'a']++;
        int n = words.size();
        for (int i = 1; i < n; i++) {
            vector<int> v2(26, 0);
            for (auto &c: words[i]) v2[c - 'a']++;
            for (int j = 0; j < 26; j++) v1[j] = min(v1[j], v2[j]);
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++) ans.insert(ans.end(), v1[i], string(1, 'a' + i));
        return ans;
    }
};