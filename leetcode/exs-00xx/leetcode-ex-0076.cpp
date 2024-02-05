class Solution {
public:
    string minWindow(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(52, 0);
        for (auto &c: t) (c <= 'Z') ? v[c - 'A']-- : v[c - 'a' + 26]--;
        int i = 0;
        int j = 0;
        int n = s.size();
        while (j != n) {
            (s[j] <= 'Z') ? v[s[j] - 'A']++ : v[s[j] - 'a' + 26]++;
            while ((i != 52) && (v[i] >= 0)) i++;
            if (i == 52) break;
            j++;
        }
        if (i != 52) return "";
        i = 0;
        int idxI = 1;
        int idxJ = n;
        while (j != n) {
            int hash = ((s[i] <= 'Z') ? s[i] - 'A' : s[i] - 'a' + 26);
            v[hash]--;
            i++;
            if (v[hash] >= 0) continue;
            j++;
            if ((idxJ - idxI) > (j - i)) {
                idxI = i;
                idxJ = j;
            }
            while (j != n) {
                (s[j] <= 'Z') ? v[s[j] - 'A']++ : v[s[j] - 'a' + 26]++;
                if (v[hash] == 0) break;
                j++;
            }
        }
        return s.substr(idxI - 1, idxJ - idxI + 1);
    }
};