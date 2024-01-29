class Solution {
public:
    int maximumLength(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<int, int> m;
        int ans = 0;
        for (auto &num: nums) {
            if (num != 1) m[num]++;
            else ans++;
        }
        if (ans && !(ans & 1)) ans--;
        for (auto it1 = m.begin(); it1 != m.end(); it1++) {
            auto it2 = it1;
            int subsetSize = 0;
            while (it2 != m.end()) {
                subsetSize += 2;
                if ((it2->second == 1) || (it2->first > 31622)) break;
                it2 = m.find(it2->first * it2->first);
            }
            ans = max(ans, subsetSize - 1);
        }
        return ans;
    }
};