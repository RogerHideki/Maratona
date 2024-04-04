int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<char>> board;
    string word;
    int m, n, wordSize;
    vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};

    bool floodfill(int ux, int uy, int idx) {
        if (idx == wordSize) return true;
        board[ux][uy] = '!';
        for (int i = 0; i < 4; i++) {
            int vx = ux + dx[i];
            int vy = uy + dy[i];
            if ((vx == -1) || (vx == m) || (vy == -1) || (vy == n) || board[vx][vy] == '!' ||
                (board[vx][vy] != word[idx]))
                continue;
            if (floodfill(vx, vy, idx + 1)) return true;
        }
        board[ux][uy] = word[idx - 1];
        return false;
    }

    bool exist(vector<vector<char>> &board, string word) {
        this->board = board;
        this->word = word;
        m = board.size();
        n = board[0].size();
        vector<int> v(58, 0);
        wordSize = word.size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) v[board[i][j] - 'A']++;
        }
        for (auto &c: word) {
            if (!v[c - 'A']) return false;
            v[c - 'A']--;
        }
        for (int ux = 0; ux < m; ux++) {
            for (int uy = 0; uy < n; uy++) {
                if (board[ux][uy] != word[0]) continue;
                if (floodfill(ux, uy, 1)) return true;
            }
        }
        return false;
    }
};