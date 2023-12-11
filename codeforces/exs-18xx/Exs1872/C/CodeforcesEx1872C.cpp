#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int CRIVO_SIZE = 3162;
bitset<3163> bs;
vector<int> primos;

void crivo() {
    bs.set();
    bs[0] = 0;
    for (int i = 2; i <= CRIVO_SIZE; i++) {
        if (bs[i]) {
            primos.push_back(i);
            for (int j = i * i; j <= CRIVO_SIZE; j += i) bs[j] = 0;
        }
    }
}

bool isPrime(int n) {
    if (n <= CRIVO_SIZE) return bs[n];
    int primosSize = primos.size();
    for (int i = 0; i < primosSize && primos[i] * primos[i] <= n; i++)
        if (n % primos[i] == 0) return 0;
    return 1;
}

int main() {
    crivo();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if (r - l == 0) {
            if (isPrime(r)) cout << -1 << '\n';
            else if (!(r & 1)) cout << 2 << ' ' << r - 2 << '\n';
            else {
                for (int i = 3; i < r / 2; i += 2) {
                    if (r % i == 0) {
                        cout << i << ' ' << r - i << '\n';
                        break;
                    }
                }
            }
        } else {
            if (r < 4) cout << -1 << '\n';
            else if (r & 1) cout << 2 << ' ' << r - 3 << '\n';
            else cout << 2 << ' ' << r - 2 << '\n';
        }
    }
    return 0;
}