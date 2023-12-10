class Solution {
public:
    bool isValidSudoku(vector <vector<char>> &board) {
        vector <vector<int>> mapLine(9, vector<int>(9, 0));
        vector <vector<int>> mapColumn(9, vector<int>(9, 0));
        vector <vector<int>> mapSquare(9, vector<int>(9, 0));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int index = board[i][j] - '1';
                    int k = i / 3 * 3 + j / 3;
                    if (mapLine[i][index] || mapColumn[j][index] || mapSquare[k][index]) return false;
                    mapLine[i][index] = mapColumn[j][index] = mapSquare[k][index] = 1;
                }
            }
        }
        return true;
    }
};