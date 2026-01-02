#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //ios::out to write to a file
    //ios::in to read a file
    //ios::app to append to an existing file
    //ios::trunc to truncate(erase/delete file) before writing 

    // fstream file("data.txt", ios::out | ios::app);

    // file<<"adding a new line\n";
    // file.close();

    // cout<<"done! DONE!\n";

    ifstream file("data.txt");
    

    //could be string not int
    int number;
    int sum = 0;
    int arr[5];
    int index = 0;

    while(file>>number && index<5){
        cout<<number<<endl;
        sum += number;
        arr[index] = number;
        index++;
    }
    
    int max = arr[0];
    for (int j = 1; j<5; j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    cout<<"\n";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"The maximum number is "<<max<<endl;


    file.close();
    cout<<"The sum is "<<sum<<endl;

}