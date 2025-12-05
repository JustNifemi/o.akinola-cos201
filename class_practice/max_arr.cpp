#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 13};

    int max = arr[0];
    for(int i = 1;i<7;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}