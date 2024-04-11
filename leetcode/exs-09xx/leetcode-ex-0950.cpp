int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();
        queue<int> q;
        for (int i = n - 1;; i--) {
            q.emplace(deck[i]);
            if (!i) break;
            q.emplace(q.front());
            q.pop();
        }
        vector<int> ans(n);
        for (int i = n - 1; i != -1; i--) {
            ans[i] = q.front();
            q.pop();
        }
        return ans;
    }
};