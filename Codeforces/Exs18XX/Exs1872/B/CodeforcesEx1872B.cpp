#include <iostream>
#include <climits>

#define INF INT_MAX;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = INF;
        while (n--) {
            int d, s;
            cin >> d >> s;
            int movimentos = s / 2;
            if (!(s & 1)) movimentos -= 1;
            int sala = d + movimentos;
            k = min(k, sala);
        }
        cout << k << '\n';
    }
    return 0;
}