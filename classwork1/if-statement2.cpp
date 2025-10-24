#include <iostream>
using namespace std;

/*  step1: Get user input
    step2: check if the age is greater than or equal to 18
            if step 2 is true, display 'You are an adult'
            else display  'You are NOT an adult'
    step4: end*/

int main()
{
    int age;
    cout<<"Enter your age here: ";
    cin>>age;

    if (age >= 18)
    {
        cout<<"You are an adult";
    } 
    else 
    {
        cout<<"You are NOT an adult";
    } 
    
    
    return 0;
}