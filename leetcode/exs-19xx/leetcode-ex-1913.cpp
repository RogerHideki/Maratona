class Solution {
public:
    int maxProductDifference(vector<int> &nums) {
        int a, b, c, d;
        a = b = 0;
        c = d = 10001;
        for (auto &num: nums) {
            if (a < num) {
                b = a;
                a = num;
            } else b = max(b, num);
            if (d > num) {
                c = d;
                d = num;
            } else c = min(c, num);
        }
        return (a * b) - (c * d);
    }
};