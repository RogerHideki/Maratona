#include <iostream>

using namespace std;

int main() {
    int b, g, faltam;

    cin >> b >> g;
    faltam = g / 2 - b;
    if (faltam > 0) cout << "Faltam " << faltam << " bolinha(s)";
    else cout << "Amelia tem todas bolinhas!";
    cout << endl;

    return 0;
}