#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, marmore, consulta;

    for (int i = 1; cin >> n >> q && !(n == 0 && q == 0); i++) {
        vector<int> v(10001);
        int index = 1;

        while (n--) {
            cin >> marmore;
            v[marmore]++;
        }

        for (int j = 0; j < 10001; j++) {
            if (v[j] != 0) {
                index += v[j];
                v[j] = index - v[j];
            }
        }

        cout << "CASE# " << i << ':' << endl;
        while (q--) {
            cin >> consulta;
            cout << consulta;
            index = v[consulta];
            (index == 0 ? cout << " not found" : cout << " found at " << index);
            cout << endl;
        }
    }

    return 0;
}