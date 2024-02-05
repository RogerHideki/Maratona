class Solution {
public:
    int returnToBoundaryCount(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int x = 0;
        int ans = 0;
        for (auto &num: nums) {
            x += num;
            if (!x) ans++;
        }
        return ans;
    }
};