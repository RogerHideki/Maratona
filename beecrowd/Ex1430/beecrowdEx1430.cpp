#include<iostream>
#include<map>

using namespace std;

int main() {
    string composicao;
    map<char, double> m;

    m['W'] = 1;
    m['H'] = 0.5;
    m['Q'] = 0.25;
    m['E'] = 0.125;
    m['S'] = 0.0625;
    m['T'] = 0.03125;
    m['X'] = 0.015625;

    while (cin >> composicao && composicao != "*") {
        int size = composicao.size(), compassos = 0;
        double acc = 0;
        for (int i = 0; i < size; i++) {
            if (composicao[i] != '/') {
                map<char, double>::iterator it = m.find(composicao[i]);
                if (it != m.end()) {
                    acc += it->second;
                }
            } else {
                if (acc == 1) {
                    compassos++;
                }
                acc = 0;
            }
        }
        cout << compassos << endl;
    }

    return 0;
}