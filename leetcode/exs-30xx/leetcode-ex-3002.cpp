class Solution {
public:
    int maximumSetSize(vector<int> &nums1, vector<int> &nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2, s3;
        for (auto &num: nums2) {
            s2.insert(num);
            if (s1.find(num) != s1.end()) s3.insert(num);
        }
        int n = nums1.size();
        int n3 = s3.size();
        return min(n, (min((int) s1.size() - n3, n / 2) + min((int) s2.size() - n3, n / 2) + n3));
    }
};