#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int crivoSize = 316;
bitset<317> bs;
vector<int> primos;

void crivo() {
    bs.set();
    bs[1] = bs[0] = 0;
    for (int i = 2; i <= crivoSize; i++) {
        if (bs[i]) {
            primos.push_back(i);
            for (int j = i * i; j <= crivoSize; j += i) bs[j] = 0;
        }
    }
}

bool isPrime(int n) {
    if (n <= crivoSize) return bs[n];
    int primosSize = primos.size();
    for (int i = 0; i < primosSize && primos[i] * primos[i] <= n; i++) if (n % primos[i] == 0) return 0;
    return 1;
}

int main() {
    int n;

    crivo();
    while(cin >> n) {
        if (isPrime(n)) {
            string s = to_string(n);
            int sSize = s.size();
            for (int i = 0; i < sSize; i++) {
                if (!isPrime(s[i] - '0')) {
                    cout << "Primo";
                    break;
                }
                if (i == sSize - 1) cout << "Super";
            }
        } else cout << "Nada";
        cout << endl;
    }

    return 0;
}