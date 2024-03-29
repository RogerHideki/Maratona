int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    long long countSubarrays(vector<int> &nums, int k) {
        int maximum = *max_element(nums.begin(), nums.end());
        long long int ans = 0;
        int left = 0, right = 0, n = nums.size();
        while (right < n) {
            k -= (nums[right++] == maximum);
            while (!k) k += (nums[left++] == maximum);
            ans += left;
        }
        return ans;
    }
};