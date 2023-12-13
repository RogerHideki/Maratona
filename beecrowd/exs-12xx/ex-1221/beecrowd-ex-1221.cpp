#include <iostream>

using namespace std;

int isPrime(long long int a) {
    if (a == 2) return 1;
    if (a % 2 == 0 || a == 1) return 0;
    for (int i = 3; i * i <= a; i += 2) if (a % i == 0) return 0;
    return 1;
}

int main() {
    int n;

    cin >> n;
    while (n--) {
        long long int x;

        cin >> x;
        cout << (isPrime(x) == 1 ? "Prime" : "Not Prime") << endl;
    }

    return 0;
}