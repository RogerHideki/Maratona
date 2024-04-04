int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if (n != t.size()) return false;
        vector<int> vS(256, -1), vT(256, -1);
        for (int i = 0; i < n; i++) {
            if (vS[s[i]] != vT[t[i]]) return false;
            if (vS[s[i]] == -1) vS[s[i]] = vT[t[i]] = i;
        }
        return true;
    }
};