class Solution {
public:
    bool hasTrailingZeros(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int score = 0;
        for (auto &num: nums) {
            if (!(num & 1)) score++;
            if (score == 2) return true;
        }
        return false;
    }
};