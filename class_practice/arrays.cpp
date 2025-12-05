#include <iostream>
using namespace std;

void readArray(int list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the number at index " << i << ": ";
        cin>>list[i];
        cout<<"\n";
    }
}

void printArray(int list[], int size){
    for(int i=0;i<size;i++){
        cout<<"The element at index "<<i<<" is "<<list[i]<<endl;
    }
}

int main()
{
    
    int size;
    int arr[50];

    cout<<"Please enter the size of the array: "<<endl;
    cin>>size;
    readArray(arr,size);
    printArray(arr,size);
    

    // int size = sizeof(arr)/sizeof(arr[0]);

    /*int sum = 0;
    for (int i=0; i<5; i++){
        sum += arr[i];
        cout<<sum<<"\n";
    }*/
}