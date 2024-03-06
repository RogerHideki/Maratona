class Solution {
public:
    int bagOfTokensScore(vector<int> &tokens, int power) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (tokens.empty()) return 0;
        sort(tokens.begin(), tokens.end());
        int left = 0;
        int right = tokens.size() - 1;
        int score = 0;
        while (left < right) {
            if (tokens[left] > power) {
                if (!score) return 0;
                power += tokens[right];
                score--;
                right--;
                continue;
            }
            power -= tokens[left];
            score++;
            left++;
        }
        if (tokens[left] <= power) score++;
        return score;
    }
};