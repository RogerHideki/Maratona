#include <iostream>

using namespace std;

int main() {
    int n, t, v, distancia = 0;

    cin >> n;
    while (n--) {
        cin >> t >> v;
        distancia += (t * v);
    }
    cout << distancia << endl;

    return 0;
}