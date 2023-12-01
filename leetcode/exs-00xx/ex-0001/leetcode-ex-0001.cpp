class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;
        int i;
        for (i = 0; m.find(target - nums[i]) == m.end(); i++) m[nums[i]] = i;
        return {m[target - nums[i]], i};
    }
};