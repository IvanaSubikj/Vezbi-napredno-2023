#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string filename;
    string text;
    cout << "Vnesete go imeto na datotekata: ";
    cin >> filename;
    cout << "Vnesete go tekstot koj treba da se napise: ";
    cin >> text;
    ofstream file;
    file.open(filename.c_str(), ios_base::app); //otvaranje na fajlot vo rezimza dodavanje na podatoci 
    if (file.is_open()) { //proverka dali fajlot e uspesno otvoren 
        file << text << endl;
        file.close();
        cout << "Tekstot e uspesno napisan vo datotekata." << endl;
    }
    else {
        cout << "Ne moze da se otvori datotekata." << endl;
    }
    return 0;
}
//Ovoj kod prvo prasuva korisnikot da go vnese imeto na fajlot, potoa prasuva za tekstot koj saka da go zapise fajlot.
//Fjlot se otvara so ofstream objektot i se dodava tekstot vo fajlot so operatorot <<.
//Vo ovoj slucaj se koristi rezimot ios_base::app za da se dodade tekstot na krajot na fajlot, ako toj vekje postoi.
//Na krajot se zatvara fajlot i se ispisuva poraka dali operacijata e uspesna ili ne.
