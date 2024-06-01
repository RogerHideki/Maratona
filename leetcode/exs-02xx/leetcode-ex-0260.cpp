int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        long long int XOR = 0;
        for (auto &num: nums) XOR ^= num;
        int LSOne = XOR & (-XOR);
        vector<int> ans(2, 0);
        for (int &num: nums) ans[!(LSOne & num)] ^= num;
        return ans;
    }
};