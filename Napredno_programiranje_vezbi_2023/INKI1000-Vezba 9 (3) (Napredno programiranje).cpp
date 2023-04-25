#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(nullptr)); //postavuva seed za random broevi 
    int secretNumber = rand() % 100 + 1; //generira random broj od 1 do 100 
    int guess;
    int tries = 0;
    cout << "Pogodete go brojot (od 1 do 100):" << endl;
    do {
        cin >> guess;
        tries++;
        if (guess > secretNumber) {
            cout << "Podobro obidete se so pomal broj." << endl;
        } else if (guess < secretNumber) {
            cout << "Podobro obidete se so pogolem broj." << endl;
        }
    } while (guess != secretNumber);
    cout << "Bravo! Go pogodivte brojot " << secretNumber << " vo " << tries << " obidi." << endl;
    return 0;
}
//Programata generira random broj koristejki go vgradeniot rend() generator na random broevi, so seed koj se dobiva od tekovnoto vreme (preku time(nullptr)).
//Ovoj broj se cuva vo promenlivata secretNumber.
//Potoa, programata bara od korisnikot da go pogodi brojot preku cin >> guess, i  proveruva dali vneseniot broj e pogolem ili pomal od tajniot broj so pomosna uslovnite iskazi if i else if.
//Vo sedkoj slucaj se ispisuva soodveten hint poraka.
//Celiot proces na vcituvanje i proverkata se povtoruva se dodeka korisnikot ne go pogodi tajniot broj (odnosno, se dodeka guess ne e ednakov na secretNumber).
//Koga korisnikot ke go pogodi brojot, se ispisuva poraka za pozdrav, vklucuvajki go i brojot na obidi sto mu bile potrebni da go pogodi brojot.

   
