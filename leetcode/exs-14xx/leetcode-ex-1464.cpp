class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int numI = 0;
        int numJ = 0;
        for (auto num: nums) {
            if (numJ < num) {
                numI = numJ;
                numJ = num;
            } else if (numI < num) numI = num;
        }
        return (numI - 1) * (numJ - 1);
    }
};