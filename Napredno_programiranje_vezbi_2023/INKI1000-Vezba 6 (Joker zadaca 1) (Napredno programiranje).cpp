#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
// Define constants for the number of cards and faces
const int NUM_CARDS = 54;
const int NUM_FACES = 13;
// Define a structure to represent a card
struct Card {
    string face;
    string suit;
};
// Define a function to fill the deck of cards with faces and suits
void fillDeck(Card deck[], const string faces[], const string suits[]) {
    int i, j, k;
    // Fill the deck with all 52 cards
    for (i = 0; i < NUM_FACES; i++) {
        for (j = 0; j < 4; j++) {
            // Add the regular cards to the deck
            deck[i * 4 + j].face = faces[i];
            deck[i * 4 + j].suit = suits[j];
        }
    }
    // Add the two jokers to the deck
    for (k = 0; k < 2; k++) {
        deck[NUM_CARDS - 2 + k].face = "Joker";
        deck[NUM_CARDS - 2 + k].suit = "Joker";
    }
}
// Define a function to shuffle the deck of cards
void shuffleDeck(Card deck[]) {
    int i, j, randIndex;
    Card tempCard;
    // Seed the random number generator
    srand(time(NULL));
    // Shuffle the deck using the Fisher-Yates algorithm
    for (i = NUM_CARDS - 1; i > 0; i--) {
        randIndex = rand() % (i + 1);
        tempCard = deck[randIndex];
        deck[randIndex] = deck[i];
        deck[i] = tempCard;
    }
}

// Define a function to deal the deck of cards to four players
void dealDeck(Card deck[]) {
    int i, j;
    // Deal the cards to four players
    for (i = 0; i < 4; i++) {
        cout << "Player " << i + 1 << ": ";
        for (j = 0; j < NUM_CARDS / 4; j++) {
            cout << deck[i * (NUM_CARDS / 4) + j].face << " of "
                 << deck[i * (NUM_CARDS / 4) + j].suit << ", ";
        }
        cout << endl;
    }
}
int main() {
    // Define the faces and suits of the cards
    const string faces[NUM_FACES] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    const string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // Create an array to hold the deck of cards
    Card deck[NUM_CARDS];
    // Fill the deck with faces and suits
    fillDeck(deck, faces, suits);
    // Display the deck of cards before shuffling
    cout << "Deck of cards before shuffling:" << endl;
    dealDeck(deck);
    // Shuffle the deck of cards
    shuffleDeck(deck);
    // Display the deck of cards after shuffling
    cout << "Deck of cards after shuffling:" << endl;
    dealDeck(deck);
    // Deal the deck of cards to four players
    cout << "Dealing the deck of cards:" << endl;
    dealDeck(deck);
    return 0;
}