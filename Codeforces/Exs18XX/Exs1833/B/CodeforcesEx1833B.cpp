#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int t, n, k;

    cin >> t;
    while (t--) {
        map<int, vector<int>> m;

        cin >> n >> k;

        vector<int> a(n);
        vector<int> aux(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            aux[i] = a[i];
        }
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(aux.begin(), aux.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++) m[aux[i]].push_back(b[i]);

        for (int i = 0; i < n; i++) {
            cout << m[a[i]][0] << " ";
            m[a[i]].erase(m[a[i]].begin());
        }
        cout << endl;
    }

    return 0;
}