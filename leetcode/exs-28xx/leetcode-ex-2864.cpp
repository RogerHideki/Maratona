class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ones = -1;
        int zeros = 0;
        string ans = "";
        for (int i = 0; i < s.size(); i++) s[i] == '1' ? ones++ : zeros++;
        while (ones--) ans += '1';
        while (zeros--) ans += '0';
        ans += '1';
        return ans;
    }
};