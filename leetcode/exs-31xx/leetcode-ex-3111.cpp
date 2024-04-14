int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>> &points, int w) {
        set<int> s;
        for (auto &point: points) s.insert(point[0]);
        if (!w) return s.size();
        int boundary = -1, ans = 0;
        for (auto &x: s) {
            if (x <= boundary) continue;
            boundary = x + w;
            ans++;
        }
        return ans;
    }
};