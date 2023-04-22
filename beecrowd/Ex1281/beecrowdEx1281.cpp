#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

int main() {
    int n;

    cin >> n;
    while (n--) {
        int m, p, quantidade;
        string item;
        double preco, gasto = 0;
        map<string, double> produtos;

        cin >> m;
        while (m--) {
            cin >> item >> preco;
            produtos[item] = preco;
        }

        cin >> p;
        while (p--) {
            cin >> item >> quantidade;
            map<string, double>::iterator it = produtos.find(item);
            gasto += (it->second * quantidade);
        }
        printf("R$ %.2f\n", gasto);
    }

    return 0;
}