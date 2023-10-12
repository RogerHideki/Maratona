#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, n, m;
    string x, s;
    cin >> t;
    while (t--) {
        int ans = 0, valido = 2;
        cin >> n >> m >> x >> s;
        while (1) {
            if (x.find(s) != string::npos) {
                cout << ans << '\n';
                break;
            }
            if (!valido) {
                cout << -1 << '\n';
                break;
            }
            if (x.size() >= m) valido--;
            x += x;
            ans++;
        }
    }
    return 0;
}
