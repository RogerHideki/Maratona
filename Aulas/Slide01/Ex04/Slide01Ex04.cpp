#include<iostream>
#include<map>

using namespace std;

int main() {
    map<string, double> produtos;
    int n;
    string item;
    double preco;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> item >> preco;
        produtos[item] = preco;
    }

    for (map<string, double>::iterator it = produtos.begin(); it != produtos.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    cin >> item;
    map<string, double>::iterator it = produtos.find(item);
    if (it == produtos.end()) {
        cout << "Produto não existe no mapa!" << endl;
    } else {
        cout << "Achou: " << it->first << " " << it->second << endl;
    }

    return 0;
}