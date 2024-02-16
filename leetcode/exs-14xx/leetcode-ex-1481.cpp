class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<int, int> m;
        for (auto &num: arr) m[num]++;
        int n = m.size();
        vector<int> v(n);
        int i = -1;
        for (auto &it: m) {
            i++;
            v[i] = it.second;
        }
        sort(v.begin(), v.end(), greater<int>());
        while ((i >= 0) && (v[i] <= k)) {
            n--;
            k -= v[i];
            i--;
        }
        return n;
    }
};