#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Enter the day(0-6): ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"weekday";
            break;
        case 2:
            cout<<"weekday";
            break;
        case 3:
            cout<<"weekday";
            break;
        case 4:
            cout<<"weekday";
            break;
        case 5:
            cout<<"weekday";
            break;
        case 0:
            cout<<"weekend";
            break;
        case 6:
            cout<<"weekend";
            break;
        default:
            cout<<"NOT A DAY";
    }
    return 0;
}