#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
    int x;
    string n;
    map<string, vector<string>> m;

    cin >> x;
    while(x--) {
        vector<string> v(3);

        cin >> n;
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }
        m[n] = v;
    }

    while(cin >> n) {
        string p;

        cin >> p;
        map<string, vector<string>>::iterator it = m.find(n);
        if (it != m.end()) {
            for (int i = 0; i < 3; i++) {
                if (it->second[i] == p) {
                    cout << "Uhul! Seu amigo secreto vai adorar o/";
                    break;
                }
                if (i == 2) {
                    cout << "Tente Novamente!";
                }
            }
        } else {
            cout << "Tente Novamente!";
        }
        cout << endl;
    }
}