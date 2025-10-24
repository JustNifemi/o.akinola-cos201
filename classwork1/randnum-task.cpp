#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number1 = rand()%10;
    int number2 = rand()%10;

   // cout<<"Number 1 is: "<<number1<<" and number 2 is: "<<number2<<endl;

    if (number1<number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
       // cout<<"After swap, number 1 is: "<<number1<<" and number 2 is: "<<number2<<endl;
    }

    cout<<"What is number1 - number2? (a number between 0-9)"<<endl;

    int answer;
    cin>>answer;

    int realAnswer = number1-number2;
    if (answer==realAnswer)
    {
        cout<<"Correct!"<<endl;
    }
     else
    {
        cout<<"Wrong!"<<endl;
        cout<<"Correct answer = "<<realAnswer;
    }

    

}