#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //ofstream - write to file (output)
    //ifstream - read from file (input)
    //fstream - read & write 

    // if you don't specify the path, it saves to the path of the source code
    // outfile is the file name
    ofstream outfile("data.txt");

    if (!outfile){
        cout<<"Error opening file or sth"; return 1;
    }

    outfile<<"Welcome to C++\n";
    outfile<<"This is file handling class\n";

    outfile.close();
    cout<<"Data written to file\n";


    return 0;
}