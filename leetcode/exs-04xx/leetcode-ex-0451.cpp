class Solution {
public:
#define pic pair<int, char>

    string frequencySort(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<char, int> m1;
        for (auto &c: s) m1[c]++;
        priority_queue<pic, vector<pic>> pq;
        for (auto &[key, value]: m1) pq.emplace(value, key);
        string ans = "";
        while (!pq.empty()) {
            auto [first, second] = pq.top();
            pq.pop();
            for (int i = 0; i < first; i++) ans += second;
        }
        return ans;
    }
};