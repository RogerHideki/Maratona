#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, repetidas = 0;
    map<int, int> m;

    cin >> n;
    while (n--) {
        int chave;

        cin >> chave;
        map<int, int>::iterator it = m.find(chave);
        if (it == m.end()) {
            m[chave] = 0;
        } else {
            repetidas++;
        }
    }

    cout << m.size() << endl << repetidas << endl;
}