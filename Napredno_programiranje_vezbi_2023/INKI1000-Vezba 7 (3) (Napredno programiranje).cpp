#include <iostream>
using namespace std;
// Klasa za obem na pravoagolnik
class RectangleVolume {
protected:
    float width;
    float height;
    float length; //Dolzina na hipotenuzata
public:
    void setDimensions(float w, float h, float l) {
        cout << "Setting the Dimensions for Rectangle: " << w << " x " << h << " x " << l << endl;
        width = w;
        height = h;
        length = l;
    }

    float getVolume() {
        return width * height * length;
    }
};

//Klasa za obem na triagolnik
class TriangleVolume {
protected:
    float width;
    float height;
    float hypotenuse; // Privatna/zastitena hipotenuza
public:
    void setDimensions(float w, float h, float hyp) {
        cout << "Setting the Dimensions for Triangle: " << w << " x " << h << " x " << hyp << endl;
        width = w;
        height = h;
        hypotenuse = hyp;
    }
    float getVolume() {
        return width * height * hypotenuse / 2;
    }
};
//Glavna funkcija za testiranje
int main() {
    cout << " ===== Program to demonstrate the concept of Hierarchial Inheritence in CPP =====" << endl << endl;
    //Kreiranje na objektite od klasite i postavuvanje na dimenzii
    RectangleVolume rectangle;
    TriangleVolume triangle;
    rectangle.setDimensions(8, 2, 6);
    triangle.setDimensions(6, 7, 9);
    //Presmetka na obemite i pecatenje 
    cout << "Volume of the Rectangle is: " << rectangle.getVolume() << endl << endl;
    cout << "Volume of the Triangle is: " << triangle.getVolume() << endl << endl;
    return 0;
}