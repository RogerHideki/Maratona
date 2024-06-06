int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isNStraightHand(vector<int> &hand, int groupSize) {
        if (hand.size() % groupSize) return false;
        sort(hand.begin(), hand.end());
        vector<vector<int>> v;
        int key = hand[0], value = 0;
        for (auto &card: hand) {
            if (card == key) {
                value++;
                continue;
            }
            v.push_back({key, value});
            key = card;
            value = 1;
        }
        v.push_back({key, value});
        int n = v.size() - groupSize;
        int i = 0;
        for (; i <= n; i++) {
            if (!v[i][1]) continue;
            for (int j = 1; j < groupSize; j++) {
                if ((v[i][0] + j) != v[i + j][0]) return false;
                if (v[i][1] > v[i + j][1]) return false;
                v[i + j][1] -= v[i][1];
            }
        }
        n += groupSize;
        for (; i < n; i++) {
            if (v[i][1]) return false;
        }
        return true;
    }
};