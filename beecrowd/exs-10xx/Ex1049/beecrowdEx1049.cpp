#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<string, map<string, map<string, string>>> mAnimais;
    vector<string> caracteristica(3);

    mAnimais["vertebrado"]["ave"]["carnivoro"] = "aguia";
    mAnimais["vertebrado"]["ave"]["onivoro"] = "pomba";
    mAnimais["vertebrado"]["mamifero"]["onivoro"] = "homem";
    mAnimais["vertebrado"]["mamifero"]["herbivoro"] = "vaca";
    mAnimais["invertebrado"]["inseto"]["hematofago"] = "pulga";
    mAnimais["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
    mAnimais["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
    mAnimais["invertebrado"]["anelideo"]["onivoro"] = "minhoca";

    for (int i = 0; i < 3; i++) cin >> caracteristica[i];

    cout << mAnimais[caracteristica[0]][caracteristica[1]][caracteristica[2]] << endl;

    return 0;
}