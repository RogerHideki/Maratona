int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int timeRequiredToBuy(vector<int> &tickets, int k) {
        int ans = 0;
        for (int i = 0; i < k; i++) ans += min(tickets[i], tickets[k]);
        ans += tickets[k];
        int n = tickets.size();
        tickets[k]--;
        for (int i = k + 1; i < n; i++) ans += min(tickets[i], tickets[k]);
        return ans;
    }
};