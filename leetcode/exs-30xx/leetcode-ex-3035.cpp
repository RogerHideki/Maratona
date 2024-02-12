class Solution {
public:
    int maxPalindromesAfterOperations(vector<string> &words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = words.size();
        vector<int> sizes(n);
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++) {
            sizes[i] = words[i].size();
            for (auto &c: words[i]) v[c - 'a']++;
        }
        sort(sizes.begin(), sizes.end());
        int sides = 0;
        int centers = 0;
        for (auto &amount: v) {
            sides += amount;
            if (amount & 1) {
                sides--;
                centers++;
            }
        }
        int ans = 0;
        for (auto &size: sizes) {
            if (size & 1) {
                if (centers) {
                    if (sides >= (size - 1)) {
                        centers--;
                        sides -= (size - 1);
                        ans++;
                    } else break;
                } else if (sides >= size) {
                    sides -= (size);
                    ans++;
                } else break;
            } else {
                if (sides >= size) {
                    sides -= size;
                    ans++;
                } else break;
            }
        }
        return ans;
    }
};