#include<iostream>
#include<map>

using namespace std;

int main() {
    int m, n;
    map<string, int> mHayPoint;

    cin >> m >> n;
    while (m--) {
        string chave;
        int valor;

        cin >> chave >> valor;
        mHayPoint[chave] = valor;
    }
    while (n--) {
        string descricao, palavra = "";
        int acc = 0;

        while (cin >> descricao && descricao != ".") {
            int size = descricao.size();
            for (int i = 0; i <= size; i++) {
                if (i != size && descricao[i] != ' ') {
                    palavra += descricao[i];
                } else {
                    map<string, int>::iterator it = mHayPoint.find(palavra);
                    palavra = "";
                    if (it != mHayPoint.end()) {
                        acc += it->second;
                    }
                }
            }
        }

        cout << acc << endl;
    }
}