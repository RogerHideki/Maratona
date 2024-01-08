class Solution {
public:
#define lli long long int

    int numberOfArithmeticSlices(vector<int> &nums) {
        int n = nums.size();
        vector <unordered_map<lli, int>> memo(n);
        int ans = 0;
        for (int j = 1; j < n; j++) {
            for (int i = 0; i < j; i++) {
                lli diff = (lli) nums[j] - nums[i];
                int subsequences = memo[i][diff];
                memo[j][diff] += subsequences + 1;
                ans += subsequences;
            }
        }
        return ans;
    }
};