#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    string deck[52] = {"Ace of Spades", "2 of Spades", "3 of Spades", "4 of Spades", "5 of Spades", "6 of Spades", "7 of Spades", "8 of Spades", "9 of Spades", "10 of Spades", "Jack of Spades", "Queen of Spades", "King of Spades", 
                      "Ace of Hearts", "2 of Hearts", "3 of Hearts", "4 of Hearts", "5 of Hearts", "6 of Hearts", "7 of Hearts", "8 of Hearts", "9 of Hearts", "10 of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts",
                      "Ace of Clubs", "2 of Clubs", "3 of Clubs", "4 of Clubs", "5 of Clubs", "6 of Clubs", "7 of Clubs", "8 of Clubs", "9 of Clubs", "10 of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs",
                      "Ace of Diamonds", "2 of Diamonds", "3 of Diamonds", "4 of Diamonds", "5 of Diamonds", "6 of Diamonds", "7 of Diamonds", "8 of Diamonds", "9 of Diamonds", "10 of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds"};

    cout << "The deck before shuffling:" << endl;
    for (int i = 0; i < 52; i++)
    {
        cout << deck[i] << endl;
    }
    // Shuffle the deck
    srand(time(0)); // Seed the random number generator
    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52;
        swap(deck[i], deck[j]);
    }
    cout << endl << "The deck after shuffling:" << endl;
    for (int i = 0; i < 52; i++)
    {
        cout << deck[i] << endl;
    }
    return 0;
}
//shuffling a deck of 52 playing cards. 
//The deck is represented as an array of strings, where each string represents a card. 
//The program first outputs the deck before shuffling, then uses the srand and rand functions to shuffle the deck, and finally outputs the shuffled deck.
//The swap function is used to swap the positions of two cards in the deck.
//The srand function is used to seed the random number generator with the current time, so that the shuffling is random and different each time the program is run.