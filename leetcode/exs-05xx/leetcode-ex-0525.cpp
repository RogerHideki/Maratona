int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findMaxLength(vector<int> &nums) {
        int n = nums.size();
        vector<int> v(n + n + 1, -2);
        v[n] = -1;
        int prefixSum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            prefixSum += (nums[i] ? 1 : -1);
            if (v[prefixSum + n] >= -1) ans = max(ans, i - v[prefixSum + n]);
            else v[prefixSum + n] = i;
        }
        return ans;
    }
};