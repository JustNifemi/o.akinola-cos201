#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    bool isPauStudent;

    cout<<"Enter full name ==> ";
    getline(cin, name);

    cout<<"Is PAU student? (1 for true, 0 for false): ";
// flag is a placeholder. Kinda pointless icl
    int flag;
    cin>>flag;
    isPauStudent = (flag !=0);

    cout<<isPauStudent;
    
    return 0;
}