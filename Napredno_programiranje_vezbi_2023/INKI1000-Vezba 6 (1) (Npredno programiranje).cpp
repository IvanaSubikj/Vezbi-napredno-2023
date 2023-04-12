#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDS 52
#define FACES 13
// card structure definition
struct card {
   const char *face; // define pointer face
   const char *suit; // define pointer suit
}; // end struct card
typedef struct card Card; // new type name for struct card
// prototypes
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );
int main( void )
{
   Card deck[ CARDS ]; // define array of Cards
   // sto se pravi vo ovoj red ?
   //Ovoj red deklarira promenliva "CARD DECK" kako niza od objekti od tip "CARDS". 
   //Znaci deka "CARDS" pretstavuva struktura ili klasa koja definira svojstvai metodi za opisuvanje na edna karta, a "CARD DECK" e niza od povekje objekti od taa klasa.
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};
   // sto se pravi vo ovoj red ?
   //vo ovoj red se definira niza od const char pokazuvaci, narecena "face", koja gi sodrzi iminjata na kartite vo eden spilod karti (od Ace do King). 
   //ova e del od implementacija na igrata so karti kade sto iminjata na kartite se koristat za da se pecatat na ekran ili da se prikazat na igracot.
   //ovie iminja na karti se cuvaat vo nizata "face" kako tekstualni nizi, kade sto sekoj indeks vo nizata soodvetstvuvs nsreden ime na karta od Ace do King.
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};
   srand( time( NULL ) ); // sto e ovaa naredba ?
   //ovaa naredba se koristi za da se inicijalizira generatorot na slucajni broevi so pocetna vrednost.
   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} // end main
// place strings into Card structures
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 
   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } // end for
} // end function fillDeck
// shuffle cards
void shuffle( Card * const wDeck )
{
   size_t i; // sto e ovaa promenliva ?
   //size_t e definirana promenliva koja e koristena za cuvanje na golrminata na objekt vo memorijata ili na goleminata na nizata.
   //promenlivata i vo ovaa situacija e obicno koristena kako kontrolna promenliva vo ciklusot za pristapuvanje do elementite na niza.
   //za da se inicijalizira i so pocetna vrednost, cesto se koristi 0 ili 1 vo zavisnost od toa kakva e indeksnata struktura.
   size_t j; // sto e ovaa promenliva i vo koi vrednosti se dvizi ? vidi kod 
   //size_t e tip na podatok koj se koristi za cuvanje na golemi objekti, vrednosti na indeks.
   //j e ime na promenlivata od tip size_t koja moze da se koristi za cuvanje na vrednosti od ovoj tip.
   //vrednostite na size_t se pozitivni celi broevi isto taka vrednostite na size_t mozat da se dvizat vo opseg od 0 do najgolemata vrednost za ovoj tip.
   //vo nasiov slucaj vrednosta e 52.
   Card temp; // define temporary structure for swapping Cards
   // loop thr
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; // 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } // end for
} // end function shuffle
// deal cards
void deal( const Card * const wDeck )
{
   size_t i; // counter
   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } // end for
} // end function deal