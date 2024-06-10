int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int heightChecker(vector<int> &heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int ans = 0;
        for (int i = heights.size() - 1; i >= 0; i--) ans += (heights[i] != expected[i]);
        return ans;
    }
};