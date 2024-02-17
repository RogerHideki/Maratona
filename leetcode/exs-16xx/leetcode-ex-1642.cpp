class Solution {
public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int i = 1;
        int n = heights.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (; i < n; i++) {
            if (heights[i - 1] >= heights[i]) continue;
            int diff = heights[i] - heights[i - 1];
            if (pq.size() < ladders) {
                pq.emplace(diff);
                continue;
            }
            if (ladders && (diff > pq.top())) {
                if (bricks < pq.top()) break;
                bricks -= pq.top();
                pq.pop();
                pq.emplace(diff);
                continue;
            }
            if (bricks < diff) break;
            bricks -= diff;
        }
        return i - 1;
    }
};