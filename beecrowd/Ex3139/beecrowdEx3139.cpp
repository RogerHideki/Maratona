#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int d;
    queue<int> q;
    double acc = 0;
    for (int i = 0; i < 30; i++) {
        cin >> d;
        q.push(d);
        acc += d;
    }

    int teto, dias = 0;
    while (m > n) {
        teto = ceil(acc / 30);
        q.push(teto);
        m -= teto;
        dias++;
        acc = acc - q.front() + teto;
        q.pop();
    }

    cout << dias << endl;

    return 0;
}