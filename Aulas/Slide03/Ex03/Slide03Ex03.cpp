#include <iostream>
#include <vector>

using namespace std;

vector<int> x = {1, -1, 0, 0};
vector<int> y = {0, 0, -1, 1};
int terra;

void dfs(vector<vector<int>> &mat, vector<vector<bool>> &visitados, int u, int v) {
    int n = mat.size();
    int m = mat[0].size();

    visitados[u][v] = true;
    terra++;

    for (int i = 0; i < 4; i++) {
        int xa = x[i] + u;
        int ya = y[i] + v;

        if (xa >= 0 && xa < n && ya >= 0 && ya < m && mat[xa][ya] == 1 && !visitados[xa][ya]) {
            dfs(mat, visitados, xa, ya);
        }
    }
}

int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    vector<vector<bool>> visitados(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> mat[i][j];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1 && !visitados[i][j]) {
                terra = 0;
                dfs(mat, visitados, i, j);
                if (ans < terra) ans = terra;
            }
        }
    }

    cout << ans << endl;

    return 0;
}