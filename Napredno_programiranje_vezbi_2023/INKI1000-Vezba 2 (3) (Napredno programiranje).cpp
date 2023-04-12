#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int NUM_CARDS = 54;
const int NUM_RANKS = 13;
const int NUM_SUITS = 4;
const int NUM_JOKERS = 2;
enum Rank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES, JOKER };
struct Card {
    Rank rank;
    Suit suit;
};
void initializeDeck(Card deck[]) {
    int card = 0;
    for (int suit = CLUBS; suit <= SPADES; ++suit) {
        for (int rank = ACE; rank <= KING; ++rank) {
            deck[card].rank = static_cast<Rank>(rank);
            deck[card].suit = static_cast<Suit>(suit);
            ++card;
        }
    }
    for (int joker = 0; joker < NUM_JOKERS; ++joker) {
        deck[card].rank = ACE; // the rank of the joker doesn't matter
        deck[card].suit = JOKER;
        ++card;
    }
}
void printDeck(const Card deck[]) {
    for (int card = 0; card < NUM_CARDS; ++card) {
        switch (deck[card].rank) {
            case ACE: cout << 'A'; break;
            case TWO: cout << '2'; break;
            case THREE: cout << '3'; break;
            case FOUR: cout << '4'; break;
            case FIVE: cout << '5'; break;
            case SIX: cout << '6'; break;
            case SEVEN: cout << '7'; break;
            case EIGHT: cout << '8'; break;
            case NINE: cout << '9'; break;
            case TEN: cout << 'T'; break;
            case JACK: cout << 'J'; break;
            case QUEEN: cout << 'Q'; break;
            case KING: cout << 'K'; break;
        }
        switch (deck[card].suit) {
            case CLUBS: cout << 'C'; break;
            case DIAMONDS: cout << 'D'; break;
            case HEARTS: cout << 'H'; break;
            case SPADES: cout << 'S'; break;
            case JOKER: cout << 'J'; break;
        }
        cout << ' ';
    }
    cout << endl;
}
void swapCards(Card& card1, Card& card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}
void shuffleDeck(Card deck[]) {
    srand(static_cast<unsigned int>(time(0)));
    for (int card = 0; card < NUM_CARDS; ++card) {
        int randomCard = rand() % NUM_CARDS;
        swapCards(deck[card], deck[randomCard]);
    }
}
int main() {
    Card deck[NUM_CARDS];
    initializeDeck(deck);
    cout << "Unshuffled deck:" << endl;
    printDeck(deck);
    shuffleDeck(deck);
    cout << "\nShuffled deck:" << endl;
    printDeck(deck);

    return 0;
}
//This is a program that simulates a deck of playing cards. 
//It defines a Card struct that contains a Rank and a Suit, which are defined as enums.
//The program also defines constants for the number of cards, ranks, suits, and jokers in the deck.
//The program has functions to initialize a deck of cards, print a deck of cards, swap two cards, and shuffle a deck of cards.
//The initializeDeck function assigns each card in the deck a rank and a suit, with jokers included.  
//The printDeck function prints out each card in the deck, with its rank and suit represented by a single character. 
//The swapCards function swaps the contents of two Card variables. 
//Finally, the shuffleDeck function shuffles the deck by randomly swapping each card with another card in the deck.
//The main function creates an array of Card variables, initializes and prints an unshuffled deck, shuffles the deck, and prints the shuffled deck.