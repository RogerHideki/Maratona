class Solution {
public:
    int numSpecial(vector <vector<int>> &mat) {
        vector <pair<int, int>> uns;
        int m = mat.size();
        vector<int> pesoLinhas(m, 0);
        int n = mat[0].size();
        vector<int> pesoColunas(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j]) {
                    if (!pesoLinhas[i] && !pesoColunas[j]) uns.push_back({i, j});
                    pesoLinhas[i]++;
                    pesoColunas[j]++;
                }
            }
        }
        int ans = 0;
        for (auto [i, j]: uns) {
            if (pesoLinhas[i] == 1 && pesoColunas[j] == 1) ans++;
        }
        return ans;
    }
};