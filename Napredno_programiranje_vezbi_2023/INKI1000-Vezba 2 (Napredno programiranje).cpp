#include<iostream>
#include<string>
using namespace std;
int main(){
    std::string cards[16] = { "A","K","Q","J","1","2","3","4","5","6","7","8","9","10","Joker Black","Joker Red" };//initializing cards availabel under one sign
    std::string sign[4] = { "heart", "diamond","ace", "spade" };//total number of signs
 
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 16; j++) {
        if (j < 14) {
            std::cout << sign[i];
            std::cout << cards[j] << endl;
        } else {
            if (j == 14) {
                std::cout << "Joker Black" << endl;
            } else {
                std::cout << "Joker Red" << endl;
            }
        }
    }
}
}
//In the above code first, we initialize all the necessary libraries including the “string” library since we will use some of the string functions.
//Then we declared an array of strings.
//The first array is “cards” which have values of all the cards present in one sign which are 14, and two joker in total so its size is 16.
//The second array is “signs” which have total signs present in one deck of 56 cars which is 4 so its size is 4.
//Then we have used nested for loops to print the cards that are their signature and values.
//Outer loop will run 4 times and the inner loop will run 14 times for every single run of the outer loop (total of 14*4=56) (total of 56+2=58).
//So for every single run of the outer loop all 14 cards will be printed as output under one sign