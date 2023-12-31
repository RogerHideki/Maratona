class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = s.size();
        unordered_map<char, int> m;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (m.find(s[i]) != m.end()) ans = max(ans, i - m[s[i]] - 1);
            else m[s[i]] = i;
        }
        return ans;
    }
};