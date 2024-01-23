class Solution {
public:
    vector <pair<int, int>> hashes;
    int n;
    int ans = 0;

    void f(int i, int hash, int sSize) {
        if (i == n) {
            ans = max(ans, sSize);
            return;
        }
        f(i + 1, hash, sSize);
        if (hash & hashes[i].first) {
            ans = max(ans, sSize);
            return;
        };
        f(i + 1, hash | hashes[i].first, sSize + hashes[i].second);
    }

    int maxLength(vector <string> &arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (auto &s: arr) {
            bool isSubsequence = true;
            int hash = 0;
            for (auto &c: s) {
                int binary = 1 << (c - 'a');
                if (hash & binary) {
                    isSubsequence = false;
                    break;
                }
                hash |= binary;
            };
            if (isSubsequence) hashes.emplace_back(hash, s.size());
        }
        n = hashes.size();
        f(0, 0, 0);
        return ans;
    }
};