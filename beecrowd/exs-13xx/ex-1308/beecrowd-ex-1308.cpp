#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int casos, n;

    cin >> casos;
    while (casos--) {
        cin >> n;
        cout << (((long long int) sqrt(8 * n + 1)) - 1) / 2 << endl;
    }

    return 0;
}