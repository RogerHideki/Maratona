#include<iostream>

using namespace std;

int main() {
    int t;

    cin >> t;
    while (t--) {
        int n;
        unsigned long long int fib = 0, anterior = 1;

        cin >> n;
        for (int i = 1; i <= n; i++) {
            fib += anterior;
            anterior = fib - anterior;
        }

        cout << "Fib(" << n << ") = " << fib << endl;
    }

    return 0;
}