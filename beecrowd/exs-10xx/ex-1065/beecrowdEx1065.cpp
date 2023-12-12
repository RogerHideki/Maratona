#include <iostream>

using namespace std;

int main() {
    int n, pares = 0;

    for (int i = 0; i < 5; i++) {
        cin >> n;
        if ((n & 1) == 0) pares++;
    }

    cout << pares << " valores pares" << endl;

    return 0;
}