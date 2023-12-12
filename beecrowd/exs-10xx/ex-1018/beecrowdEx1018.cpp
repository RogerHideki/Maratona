#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> valores = {100, 50, 20, 10, 5, 2, 1};

    cin >> n;

    cout << n << endl;
    for (int i = 0; i < 7; i++) {
        cout << n / valores[i] << " nota(s) de R$ " << valores[i] << ",00" << endl;
        n %= valores[i];
    }

    return 0;
}