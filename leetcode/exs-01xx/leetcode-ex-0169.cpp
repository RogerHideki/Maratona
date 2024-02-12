class Solution {
public:
    int majorityElement(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int amount = 0;
        int ans;
        for (auto &num: nums) {
            if (!amount) ans = num;
            amount += (num == ans ? 1 : -1);
        }
        return ans;
    }
};