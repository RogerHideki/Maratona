class Solution {
public:
    int minimumPushes(string word) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = word.size();
        if (n <= 8) return n;
        if (n <= 16) return 2 * (n - 8) + 8;
        if (n <= 24) return 3 * (n - 16) + 24;
        return 4 * (n - 24) + 48;
    }
};