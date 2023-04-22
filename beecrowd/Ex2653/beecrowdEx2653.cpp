#include<iostream>
#include<set>

using namespace std;

int main() {
    string joia;
    set<string> s;

    while (cin >> joia) {
        s.insert(joia);
    }

    cout << s.size() << endl;

    return 0;
}