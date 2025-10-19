#include <iostream>
using namespace std;

int main(){

    cout<<"SALES TAX CALULATOR\n";
    cout<<"Welcome to the SALES TAX CALCULATOR\n";

    double purchaseAmount;
    cout<<"To calculate sales tax at 6%, enter the total purchase amount: ";
    cin>>purchaseAmount;

    double tax = purchaseAmount * (6.0/100.0);
    double total = purchaseAmount + tax;

    cout<<"\nRESULTS\n";
    cout<<"The sales tax is: "<<tax<<endl;
    cout<<"The total is: "<<total<<endl;

}