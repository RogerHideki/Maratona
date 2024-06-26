int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int countTriplets(vector<int> &arr) {
        int n = arr.size();
        vector<int> prefixXOR(n + 1);
        prefixXOR[0] = 0;
        for (int i = 0; i < n; i++) prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j; k <= n; k++) {
                    if ((prefixXOR[j - 1] ^ prefixXOR[i - 1]) == (prefixXOR[k] ^ prefixXOR[j - 1])) ans++;
                }
            }
        }
        return ans;
    }
};