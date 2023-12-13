#include <iostream>
#include <queue>
#include <bitset>

using namespace std;

bitset<100001> canais;

int bfs(int u, int d) {
    queue<int> q;
    q.push(u);
    int level = -1;
    while (!q.empty()) {
        level++;
        int tamanho = q.size();
        for (int i = 0; i < tamanho; i++) {
            u = q.front();
            q.pop();
            if (u == d) return level;
            if (u != 100000 && canais[u + 1]) q.push(u + 1), canais[u + 1] = 0;
            if (u != 1 && canais[u - 1]) q.push(u - 1), canais[u - 1] = 0;
            if (u <= 50000 && canais[2 * u]) q.push(2 * u), canais[2 * u] = 0;
            if (u <= 33333 && canais[3 * u]) q.push(3 * u), canais[3 * u] = 0;
            if ((u & 1) == 0 && canais[u / 2]) q.push(u / 2), canais[u / 2] = 0;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);

    int o, d, k, deletado;

    while (cin >> o >> d >> k && !(o == 0 && d == 0 && k == 0)) {
        canais.set();
        for (int i = 0; i < k; i++) {
            cin >> deletado;
            canais[deletado] = 0;
        }
        cout << bfs(o, d) << "\n";
    }

    return 0;
}