class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = s.size();
        vector<int> v(26, 0);
        queue<int> q;
        for (int i = 0; i < n; i++) {
            int hash = s[i] - 'a';
            if (!v[hash]) q.emplace(i);
            v[hash]++;
            while (!q.empty() && (v[s[q.front()] - 'a'] >= 2)) q.pop();
        }
        return ((q.empty()) ? -1 : q.front());
    }
};