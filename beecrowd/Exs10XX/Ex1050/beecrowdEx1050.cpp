#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ddd;
    vector<string> ddds(72, "");

    ddds[11] = "Sao Paulo";
    ddds[19] = "Campinas";
    ddds[21] = "Rio de Janeiro";
    ddds[27] = "Vitoria";
    ddds[31] = "Belo Horizonte";
    ddds[32] = "Juiz de Fora";
    ddds[61] = "Brasilia";
    ddds[71] = "Salvador";

    cin >> ddd;
    cout << (ddd >= 0 && ddd < 72 && ddds[ddd] != "" ? ddds[ddd] : "DDD nao cadastrado") << endl;

    return 0;
}