#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    map<string, int> prognoza{
        {"Veles", 18},
        {"Skopje", 20},
        {"Bitola", 18},
        {"Struga", 17},
        {"Dojran", 22},
        {"Kichevo", 15},
        {"Debar", 21},
        {"Kochani", 24},
        {"Gevgelija", 23},
        {"Berovo", 16}
    };
    //Dopolnuvanje so 10 elementi od vrednost 0
    while (prognoza.size() < 10) {
        prognoza.insert(make_pair("Grad" + to_string(prognoza.size() + 1), 0));
    }
    //Pecatenje na mapata pred sortiranje
    cout << "??????? ????:" << endl;
    for (const auto& elem : prognoza) {
        cout << elem.first << " " << elem.second << "°C" << endl;
    }
    cout << endl;
    //Sortiranje na mapata po vrednosta
    auto comparator = [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    };
    vector<pair<string, int>> sorted_prognosis(prognoza.begin(), prognoza.end());
    sort(sorted_prognosis.begin(), sorted_prognosis.end(), comparator);
    //Pecatenje na sortiranata mapa
    cout << "????????? ????:" << endl;
    for (const auto& elem : sorted_prognosis) {
        cout << elem.first << " " << elem.second << "°C" << endl;
    }
    cout << endl;
    //Dodavanje na novi parovi
    prognoza.insert({"INKI" + to_string(1000), 21});
    prognoza.insert({"Ivana", 1809});
    //Pecatenje na mapata po dodavanje na novi parovi
    cout << "???? ?? ?????? ??????:" << endl;
    for (const auto& elem : prognoza) {
        cout << elem.first << " " << elem.second << "°C" << endl;
    }
    cout << endl;
    return 0;
}
