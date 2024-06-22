int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numberOfSubarrays(vector<int> &nums, int k) {
        vector<int> v(nums.size() + 1, 0);
        v[0] = 1;
        int sum = 0;
        int ans = 0;
        for (auto &num: nums) {
            sum += (num & 1);
            ans += (sum < k ? 0 : v[sum - k]);
            v[sum]++;
        }
        return ans;
    }
};