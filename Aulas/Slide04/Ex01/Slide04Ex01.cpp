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
    cin >> n >> m;
    vector<pair<double, pair<int, int>>> arestas(m);
    double custo;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> custo >> x >> y;
        arestas[i] = {custo, {x, y}};
    }
    sort(arestas.begin(), arestas.end());
    vector<int> pset(n);
    initSet(pset);
    double ans = 0;
    int totalEdges = 0;
    for (int i = 0; totalEdges < n - 1 && i < m; i++) {
        double peso = arestas[i].first;
        pair<int, int> edge = arestas[i].second;
        if (findSet(pset, edge.first) != findSet(pset, edge.second)) {
            unionSet(pset, edge.first, edge.second);
            ans += peso;
            totalEdges++;
        }
    }
    cout << ans << "\n";
    return 0;
}
