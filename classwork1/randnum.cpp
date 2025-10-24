#include <iostream>
#include <cstdlib>
#include <ctime> //time(0)
using namespace std;

int main()
{
    srand(time(0));
    //adding moudlous 10 restricts the number to the range 0-9
    cout<<rand()%10;
}