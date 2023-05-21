#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, qt, s, chute;

    cin >> n;
    while (n--) {
        int posicao = 0, melhor = 100;

        cin >> qt >> s;

        for (int i = 1; i <= qt; i++) {
            cin >> chute;
            chute = abs(s - chute);
            if (chute < melhor) {
                posicao = i;
                melhor = chute;
            }
        }

        cout << posicao << endl;
    }

    return 0;
}