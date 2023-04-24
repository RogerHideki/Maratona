#include <iostream>
#include <vector>

using namespace std;

struct team {
    int inscricao, pontos = 0, pRecebidos = 0;
    double pMarcados = 0, average;
};

int main() {
    int n, h = 0;

    while (cin >> n && n != 0) {
        vector<team> v(n);
        int resultados, x, y, z, w;

        resultados = n * (n - 1) / 2;
        while (resultados--) {
            cin >> x >> y >> z >> w;
            v[x - 1].pMarcados += y;
            v[x - 1].pRecebidos += w;
            v[z - 1].pMarcados += w;
            v[z - 1].pRecebidos += y;
            if (y > w) {
                v[x - 1].pontos += 2;
                v[z - 1].pontos += 1;
            } else {
                v[z - 1].pontos += 2;
                v[x - 1].pontos += 1;
            }
        }

        for (int i = 0; i < n; i++) {
            v[i].inscricao = i + 1;
            if (v[i].pRecebidos != 0) {
                v[i].average = v[i].pMarcados / v[i].pRecebidos;
            } else {
                v[i].average = v[i].pMarcados;
            }
        }

        bool desordenado = 1;
        team aux;
        while(desordenado) {
            desordenado = 0;
            for (int i = 1; i < n; i++) {
                if (v[i].pontos > v[i - 1].pontos) {
                    aux = v[i - 1];
                    v[i - 1] = v[i];
                    v[i] = aux;
                    desordenado = 1;
                } else if (v[i].pontos == v[i - 1].pontos) {
                    if (v[i].average > v[i - 1].average) {
                        aux = v[i - 1];
                        v[i - 1] = v[i];
                        v[i] = aux;
                        desordenado = 1;
                    }
                }
            }
            n--;
        }

        n = v.size();
        h++;
        if (h != 1) {
            cout << endl;
        }
        cout << "Instancia " << h << endl;
        for (int i = 0; i < n; i++) {
            cout << v[i].inscricao;
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}