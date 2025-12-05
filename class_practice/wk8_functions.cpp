#include <iostream>
using namespace std;


int summation(int num1, int num2){
    int sum = num1 + num2;
    cout<<"The sum of the two numbers is "<<sum<<endl;
    return 0;
}

int subraction(int num1, int num2){
    int sub = num1 - num2;
    cout<<"The difference of the two numbers is "<<sub<<endl;
    return 0;
}

double division(float num1, float num2){
    float div = num1 / num2;
    cout<<"The division of the two numbers is "<<div<<endl;
    return 0;
}

int numModulus(int num1, int num2){
    int mod = num1 % num2;
    cout<<"The modulus of the two numbers is "<<mod<<endl;
    return 0;
}

int multiplication(int num1, int num2){
    int mult = num1 * num2;
    cout<<"The multiplication of the two numbers is "<<mult<<endl;
    return 0;
}
int main(){
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"\nRESULTS\n";
    summation(num1, num2);
    subraction(num1, num2);
    division(num1, num2);
    numModulus(num1, num2);
    multiplication(num1, num2);

    return 0;
}