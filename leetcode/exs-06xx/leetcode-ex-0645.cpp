class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        int diffSums = n * (n + 1) / 2;
        vector<bool> s(n + 1, false);
        int duplicated;
        for (auto &num: nums) {
            diffSums -= num;
            if (!s[num]) s[num] = true;
            else duplicated = num;
        }
        return {duplicated, diffSums + duplicated};
    }
};