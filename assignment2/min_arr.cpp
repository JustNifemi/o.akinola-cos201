#include <iostream>
using namespace std;

int main(){
    int arr[] = {11, 21, 30, 14, 25, 36, 13};

    int min = arr[0];
    for(int i = 1;i<7;i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The minimum element is "<<min;
}