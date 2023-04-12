#include <iostream>
#include <string>
using namespace std;
// Function to change the first 4 characters of the first name
void changeFirstName(string& firstName) {
    if (firstName.length() >= 4) {
        firstName.replace(0, 4, "%\"*?");
    }
}
// Function to change the first 4 characters of the last name
void changeLastName(string& lastName) {
    if (lastName.length() >= 4) {
        lastName.replace(0, 4, "=-}\\");
    }
}
int main() {
    string firstName = "Ivana";
    string lastName = "Subik";
    // Output original names
    cout << "Original names: " << firstName <<endl;
    cout <<" " << lastName << endl;
    // Change first name
    changeFirstName(firstName);
    // Change last name
    changeLastName(lastName);
    // Output modified names
    cout << "Modified names: " << firstName <<endl;
    cout<< " " << lastName << endl;
    return 0;
}