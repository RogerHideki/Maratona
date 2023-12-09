class Solution {
public:
    vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2) {
        vector<int> v(101, 0);
        int ans1 = 0;
        int ans2 = 0;
        for (auto num: nums1) v[num]++;
        for (auto num: nums2) {
            if (v[num] != 0) {
                ans2++;
                if (v[num] != -1) {
                    ans1 += v[num];
                    v[num] = -1;
                }
            }
        }
        return {ans1, ans2};
    }
};