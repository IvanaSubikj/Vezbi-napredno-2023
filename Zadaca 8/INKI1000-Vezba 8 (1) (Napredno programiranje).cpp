#include <iostream>
using namespace std;
int main()
{
    char izbor; int poeni=0;
    cout<<"Ednostaven test za proverka na znaenja\n";
    cout<<"(odgovaraj so vnesuvanje na soodvetnata bukva pred tochniot odgovor)\n";
    cout<<"1.Od koj pisatel e lektirata 'Avanturata na pinokio'? A)Suzana Arsova B)Karlo Kolodi C)Ernest Hemingvej\n";
    cin>>izbor; if (izbor=='B') poeni++;
    cout<<"2.Kolku e 2+2=? A)4 B)0.4 C)5\n";
    cin>>izbor; if (izbor=='A') poeni++;
    cout<<"3.Koj se trite prirodni ezera vo Makedonija? A)Berovsko,Matka i Mladost B)Dojransko,Ohridsko i Prespansko C)Mantovo,Prilepsko i Turija\n";
    cin>>izbor; if (izbor=='B') poeni++;
    cout<<"4.Koja e himnata na Republika Makedonija? A)'Bolen mi lezi Mile Pop Jordanov' B)'Stani mome da zaigras' C)'Denes nad Makedonija'\n";
    cin>>izbor; if (izbor=='C') poeni++;
    cout<<"5.Kolku kilometri e Bitola oddalecena do Veles? A)84km B)83km C)80km\n";
    cin>>izbor; if (izbor=='A') poeni++;
    cout<<"6.Kolku ima Krusevski sela? A)21 B)19 C)22\n";
    cin>>izbor; if (izbor=='A') poeni++;
    cout<<"7.Jenna Ortega e? A)Advokatka B)Glumica C)Programerka\n";
    cin>>izbor; if (izbor=='B') poeni++;
    cout<<"8.Edna kuceska godina e ednakva na? A)6 covecki B)5 covecki C)7 covecki\n";
    cin>>izbor; if (izbor=='C') poeni++;
    cout<<"9.Sephora e brend za? A)Mebel B)Sminka C)Obleka\n";
    cin>>izbor; if (izbor=='B') poeni++;
    cout<<"10.Kolku boi ima na znakceto na 'Google'? A)6 B)5 C)4\n";
    cin>>izbor; if (izbor=='C') poeni++;
    cout<<"Spored osvoenite poeni Tvoeto znaenje e:\t";
    switch(poeni)
    {
        case 0: case 1: cout<<"Mnogu slabo - 5"; break;
        case 2: case 4: cout<<"Zadovolitelno - 6"; break;
        case 5: cout<<"Solidno - 7"; break;
        case 6: case 8: cout<<"Dosta dobro - 8"; break;
        case 9: cout<<"Mnogu dobro - 9"; break;
        case 10: cout<<"Odlicno odgovoreno - 10"; break;
    };
    return 0;
}