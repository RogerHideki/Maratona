class Solution {
public:
    int areaOfMaxDiagonal(vector <vector<int>> &dimensions) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int diagonalMax, ans;
        diagonalMax = 0;
        for (auto &dimension: dimensions) {
            int diagonal = dimension[0] * dimension[0] + dimension[1] * dimension[1];
            if (diagonalMax < diagonal) {
                diagonalMax = diagonal;
                ans = dimension[0] * dimension[1];
            } else if (diagonalMax == diagonal) ans = max(ans, dimension[0] * dimension[1]);
        }
        return ans;
    }
};