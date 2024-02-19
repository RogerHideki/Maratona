class Solution {
public:
    bool isPowerOfThree(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return ((n > 0) && !(1162261467 % n));
    }
};