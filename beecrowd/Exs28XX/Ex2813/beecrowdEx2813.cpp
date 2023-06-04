#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, nCasa = 0, nEscritorio = 0, c = 0, e = 0;
    string sd, sn;
    cin >> n;
    while (n--) {
        cin >> sd >> sn;
        if (sd == "chuva") {
            nEscritorio++;
            if (nCasa == 0) c++;
            else nCasa--;
        }
        if (sn == "chuva") {
            nCasa++;
            if (nEscritorio == 0) e++;
            else nEscritorio--;
        }
    }
    cout << c << " " << e << "\n";

    return 0;
}