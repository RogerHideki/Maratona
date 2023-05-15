#include <iostream>

using namespace std;

int main() {
    int n, s, total, menor;

    cin >> n >> total;
    menor = total;
    while (n--) {
        cin >> s;
        total += s;
        if (total < menor) menor = total;
    }
    cout << menor << endl;

    return 0;
}