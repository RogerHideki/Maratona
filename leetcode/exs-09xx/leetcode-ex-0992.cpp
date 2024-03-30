int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> nums;
    int n;

    int subarraysWithAtMostKDistinct(int k) {
        int left = 0, right = 0, ans = 0;
        vector<int> v(20001, 0);
        while (right < n) {
            k -= !v[nums[right++]]++;
            while (k == -1) k += !--v[nums[left++]];
            ans += right - left;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int> &nums, int k) {
        this->nums = nums;
        n = nums.size();
        return (k == 1 ? subarraysWithAtMostKDistinct(1)
                       : subarraysWithAtMostKDistinct(k) - subarraysWithAtMostKDistinct(k - 1)
        );
    }
};