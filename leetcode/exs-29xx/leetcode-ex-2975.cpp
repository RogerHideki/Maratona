class Solution {
public:
#define lli long long int

    int maximizeSquareArea(int m, int n, vector<int> &hFences, vector<int> &vFences) {
        hFences.push_back(1);
        hFences.push_back(m);
        sort(hFences.begin(), hFences.end());
        int hFencesSize = hFences.size();
        unordered_set<int> s;
        for (int i = 0; i < hFencesSize; i++) {
            for (int j = i + 1; j < hFencesSize; j++) s.insert(hFences[j] - hFences[i]);
        }
        vFences.push_back(1);
        vFences.push_back(n);
        sort(vFences.begin(), vFences.end());
        int vFencesSize = vFences.size();
        lli ans = -1;
        for (int i = 0; i < vFencesSize; i++) {
            for (int j = i + 1; j < vFencesSize; j++) {
                lli diff = vFences[j] - vFences[i];
                if (s.find(diff) != s.end()) ans = max(ans, diff);
            }
        }
        return (ans == -1) ? -1 : ans * ans % 1000000007;
    }
};