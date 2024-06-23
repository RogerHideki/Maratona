#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> v(3);
    while (t--) {
        cin >> v[0] >> v[1] >> v[2];
        int ans = 27;
        for (int i = 1; i <= 10; i++) ans = min(ans, abs(i - v[0]) + abs(i - v[1]) + abs(i - v[2]));
        cout << ans << '\n';
    }
    return 0;
}