#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first[] = "Hello ";
    char second[] = "World";

    strcat(first, second);
    cout<<"The first C-string is now: "<<first<<endl;

    char new1[] = "New ";
    char new2[] = "character";

    strncat(new1, new2, 4);
    cout<<"The first new C-string is now: "<<new1<<endl;


    int comp = strcmp(first, second);
    cout<<"The comparison value is: "<<comp<<endl;

    char numchar[] = "201";
    int num = atoi(numchar);
    cout<<numchar<<" is a C-string, and "<<num<<" is an integer value"<<endl;
  
return 0;
}