#include <iostream>

using namespace std;

int main() {
    int n, pecas;

    cin >> n;
    pecas = n * n / 2;
    cout << (n % 2 == 0 ? pecas : pecas + 1) << " casas brancas e " << pecas << " casas pretas" << endl;

    return 0;
}