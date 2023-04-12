#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class date
{
private:
    int day, month, year;
public:
    date(){}
    friend istream& operator>>(istream &in, date &d); //Overloading >> operator
    friend ostream& operator<<(ostream &out, date &d); //Overloading << operator
    ~date(){}
};
istream& operator>>(istream &in, date &d)
{
    cout << "\n Enter Day : ";
    in >> d.day;
    cout << "\n Enter Month : ";
    in >> d.month;
    cout << "\n Enter Year : ";
    in >> d.year;
    cout << "\n ------------------";
    // Proverka na korektnost na mesecot
    if(d.month < 1 || d.month > 12)
    {
        cout << "\n Invalid Month ";
        exit(0);
    }
    // Proverka na korektnost na denovite za mesecite so 31 den 
    if((d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12) && (d.day > 31))
    {
        cout << "\n Invalid Days ";
        exit(0);
    }
    // Proverka na korektnost na denovite za mesecite so 30 dena
    if((d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) && (d.day > 30))
    {
        cout << "\n Invalid Days ";
        exit(0);
    }
    // Proverka na korektnost na denovite za fevruari 
    if(d.month == 2)
    {
        // Proverka dali godinata e visoka
        if((d.year % 100 != 0 && d.year % 4 == 0) || (d.year % 400 == 0))
        {
            if(d.day > 29)
            {
                cout << "\n Invalid Days ";
                exit(0);
            }
        }
        else
        {
            if(d.day > 28)
            {
                cout << "\n Invalid Days ";
                exit(0);
            }
        }
    }

    return in;
}
ostream& operator<<(ostream &out, date &d)
{
    out << "\n Date : " << d.day << "/" << d.month << "/" << d.year;
    return out;
}
int main()
{
    date d;
    cout << "\n Enter Date \n";
    cout << "\n ------------------";
    cin >> d;
    cout << d;
    return 0;
}
