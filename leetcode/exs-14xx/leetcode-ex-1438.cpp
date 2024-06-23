int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int longestSubarray(vector<int> &nums, int limit) {
        int left = 0, right = 0, n = nums.size(), ans = 0;
        priority_queue<int, vector<int>> maxPQ;
        priority_queue<int, vector<int>, greater<int>> minPQ;
        map<int, int> m;
        while (right < n) {
            maxPQ.emplace(nums[right]);
            minPQ.emplace(nums[right]);
            m[nums[right++]]++;
            while ((maxPQ.top() - minPQ.top()) > limit) {
                m[nums[left++]]--;
                while (!m[maxPQ.top()]) maxPQ.pop();
                while (!m[minPQ.top()]) minPQ.pop();
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};