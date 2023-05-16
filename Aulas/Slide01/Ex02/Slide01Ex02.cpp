#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(7);
    q.push(10);
    q.push(6);

    while(q.size()) {
        cout << q.front() << " saiu da fila!" << endl;
        q.pop();
    }

    //cout << q.front() << " " << q.back() << endl;
}