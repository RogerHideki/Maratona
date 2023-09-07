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
            else {
                if (r & 1) {

                } else cout << 2 << ' ' << r - 2 << '\n';
            }

            continue;
        }
    }


    return 0;
}

//01 return -1
//02 return -1
//03 return -1
//04 return 2 2
//05 return -1
//06 return 2 4
//07 return -1
//08
//09 return 3 6
//10
//11 return -1
//12
//13 return -1
//14
//15 return 3 12
//16
//
//21 return 3 18
//
//25 return 5 5