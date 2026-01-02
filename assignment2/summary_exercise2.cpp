#include <iostream>
using namespace std;

void getScores(double scores[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<"Enter the score for student "<<i+1<<": \n";
        cin>>scores[i];
        cout<<"\n";
    }
}

int main()
{
    int size;
    cout<<"How many scores do you want to enter? \n";
    cin>>size;
    
    double* scores = new double[size];
    getScores(scores, size);

    double best = scores[0];
    for (int i = 1; i<size; i++)
    {
        if(scores[i] > best){best = scores[i];}
    }

    cout<<"\nRESULTS\n";
    for(int i = 0; i<size; i++)
    {
        char grade;
        if (scores[i] >= best-10){grade = 'A';}
        else if (scores[i] >= best-20){grade = 'B';}
        else if (scores[i] >= best-30){grade = 'C';}
        else if (scores[i] >= best-40){grade = 'D';}
        else {grade = 'F';}

        cout<<"Student "<<i+1<<", score: "<<scores[i]<<", grade: "<<grade<<endl;

    }
    delete[] scores;
    return 0;
}