class Solution {
public:
    vector<int> rearrangeArray(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> ans(nums.size());
        int i = 0;
        int j = 1;
        for (auto &num: nums) {
            if (num > 0) {
                ans[i] = num;
                i += 2;
            } else {
                ans[j] = num;
                j += 2;
            }
        }
        return ans;
    }
};