#include <iostream>

using namespace std;

int main() {
    int n, i;

    cin >> n;
    int estoque = -n;

    while (n--) {
        cin >> i;
        estoque += i;
    }

    cout << estoque << endl;

    return 0;
}