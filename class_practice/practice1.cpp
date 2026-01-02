#include <iostream>
#include <algorithm>
using namespace std;

void edit(int number, int numbers[]){
    number = 1001; 
    numbers[3] = 5555; 
}
int main(){
    int x = 1;
    int y[4] = {23, 13, 44, 77}; 
    y[0] = x;
    edit(x, y);
    cout << "x is " << x << endl;
    cout << "y[3] is " << y[3] << endl;
}