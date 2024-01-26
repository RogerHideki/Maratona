#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

vector<string> v;
vector<bool> visiteds;
vector<vector<int>> graph;
vector<string> ts;

void toposort(int u) {
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) toposort(v);
    }
    ts.emplace_back(v[u]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string y, x;
    getline(cin, y);
    int id = 0;
    map<string, int> m;
    v.assign(n, "");
    visiteds.assign(n, false);
    graph.assign(n, {});
    while (n--) {
        getline(cin, y, ':');
        if (m.find(y) == m.end()) {
            m[y] = id;
            v[id] = y;
            id++;
        }
        getline(cin, x);
        stringstream ss(x);
        while (ss >> x) {
            if (m.find(x) == m.end()) {
                m[x] = id;
                v[id] = x;
                id++;
            }
            graph[m[x]].emplace_back(m[y]);
        }
    }
    cin >> y;
    toposort(m[y]);
    n = ts.size() - 1;
    for (int i = n; i >= 0; i--) cout << ts[i] << '\n';
    return 0;
}