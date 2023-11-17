#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        bool paridade = false;
        int maxEndingHere = 0;
        int maxSoFar = -1000;
        while (n--) {
            cin >> a;
            if ((a & 1) == paridade) maxEndingHere = 0;
            else paridade = !paridade;
            maxEndingHere += a;
            if (maxSoFar < maxEndingHere) maxSoFar = maxEndingHere;
            if (maxEndingHere < 0) maxEndingHere = 0;
        }
        cout << maxSoFar << '\n';
    }
    return 0;
}
