#include <iostream>
using namespace std;

int main(){
    double firstNumber;
    double secondNumber;

    cout<<"Enter the first number: ";
    cin>>firstNumber;


    cout<<"Enter the second number: ";
    cin>>secondNumber;

    double sum = firstNumber + secondNumber;
    double difference = firstNumber - secondNumber;
    double product = firstNumber * secondNumber;

    cout<<"\nRESULTS\n";
    cout<<"The sum of "<<firstNumber<<" and "<<secondNumber<<" is "<<sum<<endl;
    cout<<"The difference of "<<firstNumber<<" and "<<secondNumber<<" is "<<difference<<endl;
    cout<<"The product of "<<firstNumber<<" and "<<secondNumber<<" is "<<product<<endl;


}