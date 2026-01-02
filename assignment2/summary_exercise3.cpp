#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int occurrences[6] = {};

    for(int i = 0;i<10000;i++)
    {
        int die = rand() % 6+1;
        occurrences[die-1]++;

    }

    int total = occurrences[0] + occurrences[1] + occurrences[2] + occurrences[3] + occurrences[4] + occurrences[5];

    for (int i=0;i<6;i++)
    {
        cout<<"The number "<<i+1<<" appeared "<<occurrences[i]<<" times."<<endl;
    }
    cout<<"Total = "<<total<<" occurrences."<<endl;

    return 0;
}