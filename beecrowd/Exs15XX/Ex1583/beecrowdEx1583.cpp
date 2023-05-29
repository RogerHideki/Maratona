#include <iostream>
#include <vector>

using namespace std;

vector<int> x = {1, -1, 0, 0};
vector<int> y = {0, 0, -1, 1};

void dfs(vector<vector<char>> &mat, vector<vector<bool>> &visitados, int u, int v) {
    int n = mat.size();
    int m = mat[0].size();

    visitados[u][v] = true;

    for (int i = 0; i < 4; i++) {
        int xa = x[i] + u;
        int ya = y[i] + v;

        if (xa >= 0 && xa < n && ya >= 0 && ya < m && mat[xa][ya] == 'A' && !visitados[xa][ya]) {
            mat[xa][ya] = 'T';
            dfs(mat, visitados, xa, ya);
        }
    }
}

int main() {
    int n, m;

    while (cin >> n >> m && !(n == 0 && m == 0)) {
        vector<vector<char>> mat(n, vector<char>(m));
        vector<vector<bool>> visitados(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> mat[i][j];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 'T' && !visitados[i][j]) {
                    dfs(mat, visitados, i, j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cout << mat[i][j];
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}