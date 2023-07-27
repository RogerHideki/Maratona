#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

void initSet(vector<int> &pset) {
    iota(pset.begin(), pset.end(), 0);
}

int findSet(vector<int> &pset, int i) {
    return pset[i] == i ? i : pset[i] = findSet(pset, pset[i]);
}

void unionSet(vector<int> &pset, int i, int j) {
    pset[findSet(pset, i)] = findSet(pset, j);
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        vector<pair<int, pair<int, int>>> arestas(m);
        int custo;
        int custoTotal = 0;
        int x, y;
        for (int i = 0; i < m; i++) {
            cin >> x >> y >> custo;
            arestas[i] = {custo, {x, y}};
            custoTotal += custo;
        }
        sort(arestas.begin(), arestas.end());
        vector<int> pset(n);
        initSet(pset);
        int ans = 0;
        int totalEdges = 0;
        for (int i = 0; totalEdges < n - 1 && i < m; i++) {
            int peso = arestas[i].first;
            pair<int, int> edge = arestas[i].second;
            if (findSet(pset, edge.first) != findSet(pset, edge.second)) {
                unionSet(pset, edge.first, edge.second);
                ans += peso;
                totalEdges++;
            }
        }
        cout << custoTotal - ans << "\n";
    }
    return 0;
}
