class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        vector<int> ans(n, 1);
        for (int i = 1; i < n; i++) ans[i] = ans[i - 1] * nums[i - 1];
        int suffixProduct = 1;
        for (int i = n - 1; i > 0; i--) {
            suffixProduct *= nums[i];
            ans[i - 1] *= suffixProduct;
        }
        return ans;
    }
};