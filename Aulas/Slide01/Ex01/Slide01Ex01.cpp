#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> p;
    p.push(5);
    p.push(15);
    cout << p.top() << '\n';
    p.pop();
    cout << p.top() << '\n';
    string s;
    getline(cin, s);
    cout << s << '\n';
    return 0;
}