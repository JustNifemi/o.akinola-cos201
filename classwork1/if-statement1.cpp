#include <iostream>
using namespace std;

/*  step1: Get user input
    step2: check if the number is a multiple of 5
            if step 2 is true, display HiFive
    step3: check is the number is even
            if step3 is true, display HiEven
            else display  WhyOdd
    step4: end*/
int main()
{
    int number;
    cout<<"Enter an integer here: ";
    cin>>number;

    if (number%5 == 0)
    {
        cout<<"HiFive";
    } 
    else if (number%2 ==0)
    {
        cout<<"HiEven";
    } 
    else
    {
        cout<<"WhyOdd";
    }
    
    return 0;
}