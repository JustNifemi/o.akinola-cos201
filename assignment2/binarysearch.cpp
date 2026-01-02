#include <iostream>
using namespace std;

int binarySearch(int low, int high, int value, int size, int list[])
{
    while(low<=high){ 
        int mid = ((low + high) + 1)/2;
        if (list[mid] == value){return mid;}
        else if (list[mid] > value){high = mid - 1;}
        else if (list[mid] < value){low = mid + 1;}
    }
    return -1;
}

int main()
{
    const int size = 10;
    int list[size] = {1,2,3,4,5,6,7,8,9,10};
    int index = binarySearch(0,size-1,3,size,list);
    cout<<"The index for 3 is: "<<index;
}