#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    set<string> cap;

    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        cap.insert(s);
    }
    cout << "Falta(m) "<< 151 - cap.size() <<" pomekon(s)." << endl;

    return 0;
}