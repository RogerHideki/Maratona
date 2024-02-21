class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans = right;
        int bit = 1;
        while (left != right) {
            if (right & 1) ans -= bit;
            bit <<= 1;
            left >>= 1;
            right >>= 1;
        }
        return ans;
    }
};