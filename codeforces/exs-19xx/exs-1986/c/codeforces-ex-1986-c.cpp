#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    string s, c;
    while (t--) {
        cin >> n >> m;
        cin >> s;
        vector<int> ind(m);
        vector<int> v(n, 0);
        for (int i = 0; i < m; i++) {
            cin >> ind[i];
            ind[i]--;
            v[ind[i]]++;
        }
        cin >> c;
        sort(ind.begin(), ind.end());
        sort(c.begin(), c.end());
        int left = 0, right = m - 1;
        for (auto &idx: ind) {
            if (v[idx]-- == 1) s[idx] = c[left++];
            else s[idx] = c[right--];
        }
        cout << s << '\n';
    }
    return 0;
}