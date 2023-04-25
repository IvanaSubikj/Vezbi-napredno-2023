#include <iostream>
#include <cctype>
#include <string>
int main() {
    std::string sentence;
    std::cout << "Vnesete recenica: ";
    std::getline(std::cin, sentence);
    int lowerCount = 0, upperCount = 0, digitCount = 0, specialCount = 0;
    for (char c : sentence) {
        if (std::islower(c)) {
            lowerCount++;
        } else if (std::isupper(c)) {
            upperCount++;
        } else if (std::isdigit(c)) {
            digitCount++;
        } else if (std::ispunct(c)) {
            specialCount++;
        }
    }
    int charCount = sentence.length();
    std::cout << "\nAnaliza na recenicata:\n";
    std::cout << "----------------------\n";
    std::cout << "Mali bukvi: " << lowerCount << std::endl;
    std::cout << "Golemi bukvi: " << upperCount << std::endl;
    std::cout << "Cifri: " << digitCount << std::endl;
    std::cout << "Specijalni znaci: " << specialCount << std::endl;
    std::cout << "Vkupni znaci: " << charCount << std::endl;
    return 0;
}
//Vo ovaa programa, prvo koristime std::string za da go zacuvame vneseniot tekst i std::getline za da go vcitame od standarden vlez.
//Potoa koristime promenlivi za da gi prebroime site bukvi, cifri i specijalni znaci vo tekstot i gi prikazuvame na ekran so koristenje na standarden izlez (std::cout).
//Konecno, gi prikazuvame i vkupniot broj na karakteri vo tekstot so koristenje na metodot length() na std::string.
