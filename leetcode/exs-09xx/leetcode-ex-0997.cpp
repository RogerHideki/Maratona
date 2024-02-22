class Solution {
public:
    int findJudge(int n, vector<vector<int>> &trust) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (trust.size() < (n - 1)) return -1;
        vector<int> count(n + 1, 1);
        for (auto &edge: trust) {
            count[edge[1]]++;
            count[edge[0]]--;
        }
        for (int i = 1; i <= n; i++) {
            if (count[i] == n) return i;
        }
        return -1;
    }
};