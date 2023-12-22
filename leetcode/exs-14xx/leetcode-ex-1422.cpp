class Solution {
public:
    int maxScore(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int sSize = s.size();
        int zeros = 0;
        int ones = 0;
        if (s[0] == '0') zeros = 1;
        for (int i = 1; i < sSize; i++) {
            if (s[i] == '1') ones++;
        }
        sSize--;
        int ans = zeros + ones;
        for (int i = 1; i < sSize; i++) {
            if (s[i] == '1') ones--;
            else zeros++;
            ans = max(ans, zeros + ones);
        }
        return ans;
    }
};