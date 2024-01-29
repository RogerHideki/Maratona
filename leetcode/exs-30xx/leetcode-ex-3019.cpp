class Solution {
public:
    int countKeyChanges(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        s[0] = char(tolower(s[0]));
        int n = s.size();
        int ans = 0;
        for (int i = 1; i < n; i++) {
            s[i] = char(tolower(s[i]));
            if (s[i - 1] != s[i]) ans++;
        }
        return ans;
    }
};