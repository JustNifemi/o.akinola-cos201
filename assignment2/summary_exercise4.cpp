#include <iostream>
using namespace  std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0, j = 0, k = 0;

    while(i<size1 && j<size2){
        if (list1[i]<list2[j]){list3[k++] = list1[i++];}
        else if (list2[j]<list1[i]){list3[k++] = list2[j++];}
    }

    while (i < size1)
        {list3[k++] = list1[i++];}

    while (j < size2)
        {list3[k++] = list2[j++];}


}

int main()
{
    int size1 = 6;
    int size2 = 5;
    int list1[] = {1,3,5,7,9,11};
    int list2[] = {2,4,6,8,10};
    int list3[11];

    merge(list1,size1,list2,size2,list3);

    cout<<"New array: { ";
    for(int i = 0;i<11;i++){
        cout<<list3[i]<<" ";
    }
    cout<<"}";

}
