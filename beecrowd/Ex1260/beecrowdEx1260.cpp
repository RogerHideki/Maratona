#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

int main() {
    int n;
    string arvore;

    cin >> n;
    getline(cin, arvore);
    getline(cin, arvore);

    while (n--) {
        int nArvores = 0;
        map<string, double> m;
        while (getline(cin, arvore) && arvore != "") {
            map<string, double>::iterator it = m.find(arvore);
            if (it != m.end()) {
                m[arvore] = ++(it->second);
            } else {
                m[arvore] = 1;
            }
            nArvores++;
        }

        for (map<string, double>::iterator it = m.begin(); it != m.end(); it++) {
            cout << it->first << " ";
            printf("%.4f\n", it->second * 100 / nArvores);
        }
        if (n != 0) {
            cout << endl;
        }
    }

    return 0;
}