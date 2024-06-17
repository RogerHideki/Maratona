int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
#define lli long long int

    bool judgeSquareSum(int c) {
        lli left = 0, right = sqrt(c);
        while (left <= right) {
            lli sum = left * left + right * right;
            if (sum == c) return true;
            (sum < c) ? left++ : right--;
        }
        return false;
    }
};