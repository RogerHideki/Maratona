class Solution {
public:
#define lli long long int
#define pllii pair<lli, int>

    int mostBooked(int n, vector<vector<int>> &meetings) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<pllii, vector<pllii>, greater<pllii>> pqAllocated;
        priority_queue<pllii, vector<pllii>, greater<pllii>> pqAvailable;
        for (int i = 0; i < n; i++) pqAvailable.emplace(0, i);
        sort(meetings.begin(), meetings.end());
        lli i = 0;
        vector<int> v(n, 0);
        for (auto &meeting: meetings) {
            while (i < meeting[0]) i++;
            while (!pqAllocated.empty() && (i >= pqAllocated.top().first)) {
                int room = pqAllocated.top().second;
                pqAllocated.pop();
                pqAvailable.emplace(0, room);
            }
            while (pqAvailable.empty() && (i < pqAllocated.top().first)) i++;
            while (!pqAllocated.empty() && (i >= pqAllocated.top().first)) {
                int room = pqAllocated.top().second;
                pqAllocated.pop();
                pqAvailable.emplace(0, room);
            }
            int room = pqAvailable.top().second;
            pqAvailable.pop();
            pqAllocated.emplace(i + meeting[1] - meeting[0], room);
            v[room]++;
        }
        int maxAmount = 0;
        int ans;
        for (int j = 0; j < n; j++) {
            if (maxAmount >= v[j]) continue;
            ans = j;
            maxAmount = v[j];
        }
        return ans;
    }
};