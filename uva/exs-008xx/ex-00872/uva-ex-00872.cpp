#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

#define N 26

vector<bool> visiteds;
vector<vector<int>> graph;
vector<int> inDegrees, ts;
int n;

void allToposort() {
    bool isSorted = true;
    for (int u = 0; u < N; u++) {
        if (inDegrees[u] || visiteds[u]) continue;
        isSorted = false;
        visiteds[u] = true;
        for (auto &v: graph[u]) inDegrees[v]--;
        ts.emplace_back(u);
        allToposort();
        visiteds[u] = false;
        for (auto &v: graph[u]) inDegrees[v]++;
        ts.pop_back();
    }
    if (!isSorted) return;
    int tsSize = ts.size();
    if (tsSize != n) {
        cout << "NO\n";
        return;
    }
    tsSize--;
    for (int i = 0; i < tsSize; i++) cout << char(ts[i] + 'A') << ' ';
    cout << char(ts[tsSize] + 'A') << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s;
    while (t--) {
        while (getline(cin, s) && s.empty());
        stringstream ss(s);
        visiteds.assign(N, true);
        n = 0;
        while (ss >> s) {
            visiteds[s[0] - 'A'] = false;
            n++;
        }
        getline(cin, s);
        ss = stringstream(s);
        graph.assign(N, {});
        inDegrees.assign(N, 0);
        while (ss >> s) {
            graph[s[0] - 'A'].emplace_back(s[2] - 'A');
            inDegrees[s[2] - 'A']++;
        }
        allToposort();
        if (t) cout << '\n';
    }
    return 0;
}