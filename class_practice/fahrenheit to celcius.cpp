#include <iostream>
using namespace std;

int main(){
    //Enter a degree in Fahrenheit
    double fahrenheit;
    cout<<"Enter a degree in Fahrenheit: ";
    cin>> fahrenheit;

    //obtain a celcius degree
    double celcius = (5.0/9) * (fahrenheit - 32);

    //display result
    cout<< "Fahrenheit " <<fahrenheit<< " is " << celcius << " in Celcius" << endl;

    //do the reverse operation (Celcius to Fahrenheit)
    double celcius2;
    cout<<"Enter a degree in Celcius: ";
    cin>> celcius2;

    double fahrenheit2 = (9.0/5)*(celcius2+32);

    //display result
    cout<< "Celcius " << celcius2 << " is " << fahrenheit2 << " in Fahrenheit" << endl;

    return 0;
}