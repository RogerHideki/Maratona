class Solution {
public:
    string minWindow(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(52, 0);
        for (auto &c: t) (c <= 'Z') ? v[c - 'A']-- : v[c - 'a' + 26]--;
        int n = s.size();
        int i = 0;
        int idxI = -1;
        int idxJ = n;
        for (int j = 0; j < n; j++) {
            (s[j] <= 'Z') ? v[s[j] - 'A']++ : v[s[j] - 'a' + 26]++;
            bool isAns = true;
            for (auto &amount: v) {
                if (amount >= 0) continue;
                isAns = false;
                break;
            }
            while (isAns) {
                int idx = ((s[i] <= 'Z') ? s[i] - 'A' : s[i] - 'a' + 26);
                v[idx]--;
                i++;
                if (v[idx] >= 0) continue;
                if ((idxJ - idxI) <= (j - (i - 1))) break;
                idxI = i - 1;
                idxJ = j;
                break;
            }
        }
        if ((idxI == -1) && (idxJ == n)) return "";
        return s.substr(idxI, idxJ - idxI + 1);
    }
};