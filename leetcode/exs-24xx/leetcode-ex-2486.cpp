int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, n = t.size();
        for (auto &c: s) {
            if (c != t[i]) continue;
            i++;
            if (i == n) return 0;
        }
        return n - i;
    }
};