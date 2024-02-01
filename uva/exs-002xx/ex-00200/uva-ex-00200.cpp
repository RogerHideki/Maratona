#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<set<int>> graph(26);
vector<bool> visiteds(26, false);
vector<int> ts;

void toposort(int u) {
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) toposort(v);
    }
    ts.emplace_back(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    vector<string> v;
    while ((cin >> s) && (s != "#")) v.emplace_back(s);
    int n = v.size();
    for (int i = 1; i < n; i++) {
        for (int j = 0; (j < v[i - 1].size()) && (j < v[i].size()); j++) {
            int ascii1 = v[i - 1][j] - 'A';
            int ascii2 = v[i][j] - 'A';
            if (ascii1 == ascii2) continue;
            graph[ascii1].insert(ascii2);
            break;
        }
    }
    for (int u = 0; u < 26; u++) {
        if (!graph[u].empty() && !visiteds[u]) toposort(u);
    }
    for (int i = ts.size() - 1; i >= 0; i--) cout << char(ts[i] + 'A');
    cout << '\n';
    return 0;
}