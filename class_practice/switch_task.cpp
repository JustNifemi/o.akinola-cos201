#include <iostream>
using namespace std;


int main(){
    int year;

    cout<<"Enter a year to check Chinese zodiac: ";
    cin>>year;

    int cycle = year % 12;

    switch(cycle){
        case 0 :
            cout<<"The Chinese zodiac for "<< year <<" is: Monkey";
            break;
        case 1 :
            cout<<"The Chinese zodiac for "<< year <<" is: Rooster";
            break;
        case 2 :
            cout<<"The Chinese zodiac for "<< year <<" is: Dog";
            break;
        case 3 :
            cout<<"The Chinese zodiac for "<< year <<" is: Pig";
            break;
        case 4 :
            cout<<"The Chinese zodiac for "<< year <<" is: Rat";
            break;
        case 5 :
            cout<<"The Chinese zodiac for "<< year <<" is: Ox";
            break;
        case 6 :
            cout<<"The Chinese zodiac for "<< year <<" is: Tiger";
            break;
        case 7 :
            cout<<"The Chinese zodiac for "<< year <<" is: Rabbit";
            break;
        case 8 :
            cout<<"The Chinese zodiac for "<< year <<" is: Dragon";
            break;
        case 9 :
            cout<<"The Chinese zodiac for "<< year <<" is: Snake";
            break;
        case 10 :
            cout<<"The Chinese zodiac for "<< year <<" is: Horse";
            break;
        case 11 :
            cout<<"The Chinese zodiac for "<< year <<" is: Sheep";
            break;
    }
    return 0;
}