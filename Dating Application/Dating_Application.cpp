#include <iostream>
#include <string>
using namespace std;
class user1{
    public:
        int age, height;
        string sex, firstName, lastName,
        sexual_prefrence, intrests;

};

void gatheringData();

int main()
{
    
    gatheringData();

    return 0;
}

void gatheringData(){
    int age,height;
    string sex, firstName, lastName, sexual_prefrence, intrests;

    cout<<"\\\\\\\\\\\\\\\\\\\\Dene's Dating Application///////////////////\n";
    cout<<"|                Welcome to Love at first glance!    |\n";
    cout<<"|What is your sex(Male/Female): ";
    cin>>sex;
    cout<<"|What is your first name: ";
    cin>>firstName;
    cout<<"|What is your last name: "; 
    cin>>lastName;
    cout<<"|How old are you: ";
    cin>>age;
    cout<<"|How tall are you(inches): ";
    cin>>height;
    cout<<"|What is your sexual prefrence: ";
    cin>>sexual_prefrence;
    cout<<"|What is your hobby or intrests: ";
    getline(cin>>ws,intrests);
}