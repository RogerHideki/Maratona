int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int specialArray(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size(), ans = 0;
        while (i < n) {
            if (ans > nums[i]) {
                i++;
                continue;
            }
            if (ans == (n - i)) return ans;
            ans++;
        }
        return -1;
    }
};