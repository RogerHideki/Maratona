#include <iostream>

using namespace std;

int main() {
    int peso;

    cin >> peso;
    cout << (peso >= 4 && (peso & 1) == 0 ? "YES" : "NO") << endl;

    return 0;
}