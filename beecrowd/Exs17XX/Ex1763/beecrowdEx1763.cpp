#include<iostream>
#include<map>

using namespace std;

int main() {
    string pais;
    map<string, string> m;

    m["brasil"] = "Feliz Natal!";
    m["alemanha"] = "Frohliche Weihnachten!";
    m["austria"] = "Frohe Weihnacht!";
    m["coreia"] = "Chuk Sung Tan!";
    m["espanha"] = "Feliz Navidad!";
    m["grecia"] = "Kala Christougena!";
    m["estados-unidos"] = "Merry Christmas!";
    m["inglaterra"] = "Merry Christmas!";
    m["australia"] = "Merry Christmas!";
    m["portugal"] = "Feliz Natal!";
    m["suecia"] = "God Jul!";
    m["turquia"] = "Mutlu Noeller";
    m["argentina"] = "Feliz Navidad!";
    m["chile"] = "Feliz Navidad!";
    m["mexico"] = "Feliz Navidad!";
    m["antardida"] = "Merry Christmas!";
    m["canada"] = "Merry Christmas!";
    m["irlanda"] = "Nollaig Shona Dhuit!";
    m["belgica"] = "Zalig Kerstfeest!";
    m["italia"] = "Buon Natale!";
    m["libia"] = "Buon Natale!";
    m["siria"] = "Milad Mubarak!";
    m["marrocos"] = "Milad Mubarak!";
    m["japao"] = "Merii Kurisumasu!";

    while (cin >> pais) {
        map<string, string>::iterator it = m.find(pais);
        if (it != m.end()) {
            cout << it->second;
        } else {
            cout << "--- NOT FOUND ---";
        }
        cout << endl;
    }
    return 0;
}