#include <iostream>
#include <cstring>

int main() {
    // Vnes na pesna i izveduvac
    char song[100], artist[100];
    std::cout << "Enter the song name: ";
    std::cin.getline(song, 100);
    std::cout << "Enter the artist name: ";
    std::cin.getline(artist, 100);
    
    // Ispisuvanje na pesnata i artistot i nivnata adresa
    std::cout << "Song: " << song << std::endl;
    std::cout << "Artist: " << artist << std::endl;
    std::cout << "Song address: " << static_cast<void*>(song) << std::endl;
    std::cout << "Artist address: " << static_cast<void*>(artist) << std::endl;
     
        //presmetka na brojot na karakteri za da se pomesti kursorot
    int cursor_moves = std::strlen(song) - std::strlen(artist);
    
    // Ispisuvanje na prviot karakter od pesnata i adresata 
    std::cout << "First character: " << song[0] << std::endl;
    std::cout << "First character address: " << static_cast<void*>(&song[0]) << std::endl;
    
    // Da se pomesti pointerot i da se pokaze ostanatoto od stringot
    char* song_ptr = song + cursor_moves;
    std::cout << "Remaining string: " << song_ptr << std::endl;
    
    return 0;
}
