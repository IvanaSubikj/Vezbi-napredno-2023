#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
// card structure definition
struct Card {
    string face; // define string face
    string suit; // define string suit
};
// function to fill the deck with cards
void fillDeck(vector<Card>& deck) {
    // define array of card faces and suits
    const string faces[] = { "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King", "Joker", "Joker" };
    const string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    // iterate through the deck and assign each card a face and a suit
    for (size_t i = 0; i < deck.size(); ++i) {
        deck[i].face = faces[i % 15];
        deck[i].suit = suits[i / 15];
    }
}
// function to shuffle the deck
void shuffleDeck(vector<Card>& deck) {
    // use the random_shuffle function from the algorithm library to shuffle the deck
    srand(time(NULL));
    random_shuffle(deck.begin(), deck.end());
}
// function to deal the cards to 4 players
void dealCards(vector<Card>& deck) {
    // declare an array of 4 vectors to hold the players' hands
    vector<Card> playerHands[4];
    // iterate through the deck and deal the cards to the players
    for (size_t i = 0; i < deck.size(); ++i) {
        int playerNum = i % 4;
        playerHands[playerNum].push_back(deck[i]);
    }
    // display the players' hands
    for (int i = 0; i < 4; ++i) {
        cout << "Player " << i + 1 << "'s hand:" << endl;
        for (size_t j = 0; j < playerHands[i].size(); ++j) {
            cout << playerHands[i][j].face << " of " << playerHands[i][j].suit << endl;
        }
        cout << endl;
    }
}
// main function
int main() {
    vector<Card> deck(54); // define vector of cards with size 54 (52 cards + 2 jokers)
    fillDeck(deck); // fill the deck with cards
    cout << "Deck before shuffling:" << endl;
    for (size_t i = 0; i < deck.size(); ++i) {
        cout << deck[i].face << " of " << deck[i].suit << endl;
    }
    cout << endl;
    shuffleDeck(deck); // shuffle the deck
    cout << "Deck after shuffling:" << endl;
    for (size_t i = 0; i < deck.size(); ++i) {
        cout << deck[i].face << " of " << deck[i].suit << endl;
    }
    cout << endl;
    dealCards(deck); // deal the cards to 4 players
    return 0;
}