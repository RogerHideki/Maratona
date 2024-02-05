class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int n = word.size();
        int ans = 0;
        for (int i = k; i < n; i += k) {
            ans++;
            bool isInitial = true;
            for (int j = i; j < n; j++) {
                if (word[j - i] == word[j]) continue;
                isInitial = false;
                break;
            }
            if (isInitial) return ans;
        }
        return ans + 1;
    }
};