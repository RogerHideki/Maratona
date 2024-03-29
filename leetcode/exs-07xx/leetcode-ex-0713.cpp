int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k) {
        if (k <= 1) return 0;
        int right = nums.size() - 1, left = right, product = 1, ans = 0;
        while (left != -1) {
            product *= nums[left];
            while (product >= k) product /= nums[right--];
            left--;
            ans += right - left;
        }
        return ans;
    }
};