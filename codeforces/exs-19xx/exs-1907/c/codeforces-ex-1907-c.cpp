#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        int ans = 0;
        vector<int> v(26, 0);
        cin >> n >> s;
        for (char letter: s) {
            int idx = letter - 'a';
            v[idx]++;
            ans = max(ans, v[idx]);
        }
        ans = 2 * ans - n;
        if (ans < 0) ans = n & 1;
        cout << ans << '\n';
    }
    return 0;
}
