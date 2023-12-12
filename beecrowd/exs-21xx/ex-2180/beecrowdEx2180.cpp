#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int crivoSize = 300;
bitset<301> bs;
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
    int peso, velocidade = 0, horas;

    crivo();

    cin >> peso;
    for (int i = 0; i < 10; i++) {
        for (peso; !isPrime(peso); peso++);
        velocidade += peso;
        peso++;
    }

    horas = 60000000 / velocidade;
    cout << velocidade << " km/h" << endl;
    cout << horas << " h / " << horas / 24 << " d" << endl;

    return 0;
}