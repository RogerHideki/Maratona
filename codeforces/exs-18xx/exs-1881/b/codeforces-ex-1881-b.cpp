#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, a, b, c, menor;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        vector<int> v = {a, b, c};
        menor = *min_element(v.begin(), v.end());
        if ((v[0] % menor) || (v[1] % menor) || (v[2] % menor) ||
            ((((v[0] / menor) + (v[1] / menor) + (v[2] / menor)) - 3) > 3))
            cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
