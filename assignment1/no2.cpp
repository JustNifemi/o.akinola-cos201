#include <iostream>
using namespace std;

int main(){
    int num1 = 18;
    int num2 = 19;

    cout<<"Numbers before swap:\n";
    cout<<"First number: "<<num1<<endl;
    cout<<"Second number: "<<num2<<endl;

    int temporaryValue = num1;
    num1 = num2;
    num2 = temporaryValue;

    cout<<"Numbers after swap:\n";
    cout<<"First number: "<<num1<<endl;
    cout<<"Second number: "<<num2<<endl;

}