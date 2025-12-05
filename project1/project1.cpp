#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
// listing options
    cout<<"PAU SUMMER COURSE REGISTRATION SOFTWARE"<<endl;
    cout<<"Welcome to PAU's summer course registration software"<<endl;
    cout<<"\n";
    cout<<R"(S/N|COURSE LIST     |DAYS|REGISTRATION(N)
1  |Photography     |3   |10,000
2  |Painting        |5   |8,000
3  |Fish Farming    |7   |15,000
4  |Baking          |5   |13,000
5  |Public Speaking |2   |5,000)";
    cout<<"\n";
    cout<<R"(S/N|LOCATION      |LODGING/DAY(N)
1  |Camp House A  |10,000
2  |Camp House B  |2,500
3  |Camp House C  |5,000
4  |Camp House D  |13,000
5  |Camp House E  |5,000)";
    cout<<"\n";

//do..while loop
    int cont = 1;
do{
    //adding inputs
    string studentName;
    cout<<"\nEnter your full name: "<<endl;
    getline(cin, studentName);

    bool isPAUstudent;
    cout<<"Are you a PAU student? Enter 1 for yes and 0 for no: "<<endl;
    cin>>isPAUstudent;

    int selectedCourse;
    cout<<"Input any number from 1-5 to select a course from the above list: "<<endl;
    cin>>selectedCourse;

    int selectedLocation;
    cout<<"Input any number from 1-5 to select a location from the above list: "<<endl;
    cin>>selectedLocation;


    //assigning the course, number of days, and registration fees
    string course = "";
    int noOfDays = 0;
    double regFee = 0;

    switch (selectedCourse){
        case 1: course = "Photography"; noOfDays = 3; regFee = 10000; break;
        case 2: course = "Painting"; noOfDays = 5; regFee = 8000; break;
        case 3: course = "Fish Farming"; noOfDays = 7; regFee = 15000; break;
        case 4: course = "Baking"; noOfDays = 5; regFee = 13000; break;
        case 5: course = "Public Speaking"; noOfDays = 2; regFee = 5000; break;
        default: cout<<"Invalid course selection"; return 1;
    }
   
    /*if (selectedCourse==1)
    {course = "Photography"; noOfDays = 3; regFee = 10000;}
    else if (selectedCourse==2)
    {course = "Painting"; noOfDays = 5; regFee = 8000;}
    else if (selectedCourse==3)
    {course = "Fish Farming"; noOfDays = 7; regFee = 15000;}
    else if (selectedCourse==4)
    {course = "Baking"; noOfDays = 5; regFee = 13000;}
    else if (selectedCourse==5)
    {course = "Public Speaking"; noOfDays = 2; regFee = 5000;}
    else
    {cout<<"Invalid course selection"; return 1;}*/


    //assigning the location and lodging per day
    string location = "";
    double lodgingPerDay = 0;

    switch(selectedLocation){
        case 1: location = "Camp House A"; lodgingPerDay = 10000; break;
        case 2: location = "Camp House B"; lodgingPerDay = 2500; break;
        case 3: location = "Camp House C"; lodgingPerDay = 5000; break;
        case 4: location = "Camp House D"; lodgingPerDay = 13000; break;
        case 5: location = "Camp House E"; lodgingPerDay = 5000; break;
        default: cout<<"Invalid location selection"; return 1;
    }

    /*if (selectedLocation==1){location = "Camp House A"; lodgingPerDay = 10000;}
    else if (selectedLocation==2){location = "Camp House B"; lodgingPerDay = 2500;}
    else if (selectedLocation==3){location = "Camp House C"; lodgingPerDay = 5000;}
    else if (selectedLocation==4){location = "Camp House D"; lodgingPerDay = 13000;}
    else if (selectedLocation==5){location = "Camp House E"; lodgingPerDay = 5000;}
    else {cout<<"Invalid location selection"; return 1;}*/

    double lodgingCost = lodgingPerDay * noOfDays;

    // applying discounts
    if (isPAUstudent && (selectedLocation==1 || selectedLocation==2))
    {
        lodgingCost -= (lodgingCost * 0.05);
    }
    if ((noOfDays>5)||(regFee>12000))
    {
        regFee -= (regFee * 0.03);
    }

    double total = regFee + lodgingCost;

//adding random number discount
    srand(time(0));
    //normally it's 0-99. So + 1 makes it 1-100
    int r = (rand()%100) + 1;
    int bonus = 0;

    if (r == 7 || r ==77)
    {
        bonus = 500;
        total -= bonus;
    }
    

//adding registration summary
    cout << "\n--- REGISTRATION SUMMARY ---\n";
    cout << "Name: " << studentName << "\n";
    cout << "PAU Student: " << (isPAUstudent ? "Yes" : "No") << "\n";
    cout << "Course: " << course << "\n";
    cout << "Days: " << noOfDays << "\n";
    cout << "Registration: ₦" << regFee << "\n";
    cout << "Location: " << location << "\n";
    cout << "Lodging: ₦" << lodgingPerDay << " x " << noOfDays << " = ₦" << lodgingCost << "\n";
    cout << "Random Draw: " << r << " | Promo Applied: ₦" << bonus << "\n";
    cout << "TOTAL: ₦" << total << endl;

    cout<<"Would you like to register another student? Enter 1 for yes and 0 for no: "<<endl;
    cin>>cont;
} while (cont == 1);

cout<<"Thank you for registering with PAU!";


    return 0;
}