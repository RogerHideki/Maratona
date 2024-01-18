class Solution {
public:
    bitset<26> bs;

    char repeatedCharacter(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (auto &c: s) {
            int idx = c - 'a';
            if (bs[idx]) return c;
            bs[idx] = 1;
        }
        return '\0';
    }
};