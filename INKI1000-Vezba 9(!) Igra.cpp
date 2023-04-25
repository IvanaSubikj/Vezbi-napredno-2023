#include <iostream>
#include <vector>
using namespace std;
//Klasa za edna soba
class Room {
public:
    Room(bool lightState) : lightOn(lightState) {}
    //Metod za vklucuvanje/isklucuvanje na svetloto 
    void toggleLight() {
        lightOn = !lightOn;
    }
    //Metod za proverka na sostojbata na svetloto
    bool isLightOn() const {
        return lightOn;
    }
private:
    bool lightOn;
};
//Klasa za kukja sostavena od povekje sobi 
class House {
public:
    House(int numRooms) {
        for (int i = 0; i < numRooms; i++) {
            rooms.push_back(Room(true)); //Site svetla se vkluceni prvicno
        }
    }
    //Metod za prefrlanje na sostojbata na svetloto vo sosednite sobi 
    void flipLights(int roomIndex) {
        rooms[roomIndex].toggleLight();
        if (roomIndex > 0) {
            rooms[roomIndex - 1].toggleLight();
        }
        if (roomIndex < rooms.size() - 1) {
            rooms[roomIndex + 1].toggleLight();
        }
    }
    //Metod za proverka na sostojbata na svetlata vo site sobi 
    bool areAllLightsOff() const {
        for (const auto& room : rooms) {
            if (room.isLightOn()) {
                return false;
            }
        }
        return true;
    }
private:
    vector<Room> rooms;
};
int main() {
    const int NUM_ROOMS = 5;
    House house(NUM_ROOMS);
    int numTries = 0;
    while (!house.areAllLightsOff()) {
        cout << "Vnesete go indeksot na prostorijata za da se proveri svetloto (0-" << NUM_ROOMS - 1 << "): ";
        int roomIndex;
        cin >> roomIndex;
        if (roomIndex < 0 || roomIndex >= NUM_ROOMS) {
            cout << "Nevazecki indeks na soba. Obidi se povtorno." << endl;
            continue;
        }
        house.flipLights(roomIndex);
        numTries++;
    }
    cout << "Sekoja cest! Gi isklucivte site svetla vnatre. " << numTries << " Se obiduva." << endl;
    return 0;
}
//Ovaa igra e konzola igra so 5 sobi, kade sto celta e da se isklucat site svetla vo site sobi.
//Korisnikot vnesuva indeks na sobata vo koja saka da ja prefrli sostojbata na svetloto, a toa ke go prefrli i sostojbata na svetlata vo sosednite sobi.
//Igrat prodolzuva dodeka site svetla ne se iskluceni.
//Koga celta ke bide postignata igracot dobiva pofalba deka gi isklucil site svetla vo kukjata i igrata zavrsuva.
