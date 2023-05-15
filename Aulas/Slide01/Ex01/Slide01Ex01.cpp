#include<iostream>
#include<stack>

using namespace std;

int main() {

    stack<int> p;
    p.push(5);
    p.push(15);
    cout << p.top() << endl;
    p.pop();
    cout << p.top() << endl;

    string s;

    getline(cin, s);

    cout << s << endl;

    return 0;
}