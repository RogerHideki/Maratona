class Solution {
public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        int gSize = g.size();
        int sSize = s.size();
        int ans, i, j;
        ans = i = j = 0;
        while (i < gSize && j < sSize) {
            if (g[i] <= s[j]) {
                ans++;
                i++;
                j++;
            } else i++;
        }
        return ans;
    }
};