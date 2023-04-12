#include <iostream>
#include <cstring>
using namespace std;
enum Rank
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};
enum Suit
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};
struct Card
{
    Rank rank;
    Suit suit;
};
union Value
{
    int iValue;
    float fValue;
    char cValue;
};
int main()
{
    Card myCard = {ACE, SPADES};
    Value myValue = {5};
    cout << "My card is the " << myCard.rank << " of " << myCard.suit << endl;
    cout << "My value is " << myValue.iValue << endl;

    return 0;
}
//The given code defines two enums, Rank and Suit, which represent the rank and suit of a playing card, respectively. 
//It also defines a struct Card which contains a rank and a suit.
//The code also defines a union Value which can hold an integer, a floating-point number or a character.
//In the main function, a Card variable myCard is initialized with the value ACE and SPADES, and a Value variable myValue is initialized with the integer value 5.
//The program then prints out the rank and suit of myCard, and the integer value of myValue.