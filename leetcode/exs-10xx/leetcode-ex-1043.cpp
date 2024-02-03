class Solution {
public:
    vector<int> arr, memo;
    int k, n;

    int f(int i) {
        if (i == n) return 0;
        if (memo[i] != -1) return memo[i];
        int j = 0;
        int largest = 0;
        int ans = 0;
        while ((j < k) && ((i + j) < n)) {
            largest = max(largest, arr[i + j]);
            j++;
            ans = max(ans, largest * (j) + f(i + j));
        }
        return memo[i] = ans;
    }

    int maxSumAfterPartitioning(vector<int> &arr, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->arr = arr;
        this->k = k;
        n = arr.size();
        memo.assign(n, -1);
        return f(0);
    }
};