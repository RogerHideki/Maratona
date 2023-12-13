#include<iostream>
#include<vector>

using namespace std;

struct pais {
    string n;
    int o;
    int p;
    int b;
};

int main() {
    int n;
    pais aux;
    bool desordenado = 1;

    cin >> n;
    vector<pais> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].n >> v[i].o >> v[i].p >> v[i].b;
    }

    while (desordenado) {
        desordenado = 0;
        for (int i = 1; i < n; i++) {
            if (v[i].o > v[i - 1].o) {
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                desordenado = 1;
            } else if (v[i].o == v[i - 1].o) {
                if (v[i].p > v[i - 1].p) {
                    aux = v[i - 1];
                    v[i - 1] = v[i];
                    v[i] = aux;
                    desordenado = 1;
                } else if (v[i].p == v[i - 1].p) {
                    if (v[i].b > v[i - 1].b) {
                        aux = v[i - 1];
                        v[i - 1] = v[i];
                        v[i] = aux;
                        desordenado = 1;
                    }
                    else if (v[i].b == v[i - 1].b) {
                        if (v[i].n.compare(v[i - 1].n) < 0) {
                            aux = v[i - 1];
                            v[i - 1] = v[i];
                            v[i] = aux;
                            desordenado = 1;
                        }
                    }
                }
            }
        }

        n--;
    }

    n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i].n << " " << v[i].o << " " << v[i].p << " " << v[i].b << endl;
    }

    return 0;
}