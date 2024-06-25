int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bitset<100000> bs;

    int minKBitFlips(vector<int> &nums, int k) {
        int n = nums.size(), toFlip = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (i >= k) toFlip ^= bs[i - k];
            if (toFlip ^ nums[i]) continue;
            if ((i + k) > n) return -1;
            bs[i] = 1;
            toFlip ^= 1;
            ans++;
        }
        return ans;
    }
};