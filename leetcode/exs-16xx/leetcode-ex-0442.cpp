int xrl8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> findDuplicates(vector<int> &nums) {
        vector<int> ans;
        for (auto &num: nums) {
            int idx = abs(num) - 1;
            if (nums[idx] < 0) {
                ans.emplace_back(idx + 1);
                continue;
            }
            nums[idx] *= -1;
        }
        return ans;
    }
};