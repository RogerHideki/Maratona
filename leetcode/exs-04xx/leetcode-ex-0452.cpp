int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findMinArrowShots(vector<vector<int>> &points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int right = points[0][1];
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (right >= points[i][0]) right = min(right, points[i][1]);
            else {
                ans++;
                right = points[i][1];
            }
        }
        return ans;
    }
};