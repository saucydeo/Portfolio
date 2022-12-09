#include <iostream>
#include <string>
using namespace std;
class user1{
    public:
        int age_;
        string change;
        char feet_, inches_;
        string sex_, first_Name_, last_Name_,
        sexual_prefrence_, intrests_, choice;

    public:
       void print_Details(){
            cout<<"\\\\\\\\\\\\\\\\\\\\"<<first_Name_<<"'s Dating Information///////////////////\n";
            cout<<"|Full name is: "<<first_Name_ +" "+last_Name_<<"                          |\n";
            cout<<"|Your sex is: "<<sex_<<"                                     |\n";
            cout<<"|Your age is: "<<age_<<"                                    |\n";
            cout<<"|Your height is: "<<feet_<<"'"<<inches_<<"                                 |\n";
            cout<<"|Your partner's sex: "<<sexual_prefrence_<<"                            |\n";
            cout<<"|Intrests: "<<intrests_<<"              \n";
        }
};
double findHeight(double height){
    double total = height/12;
    return total;

}
void Change(int age,string firstName, string lastName,string sex, string sexual_prefrence,string intrests,char feet, char inches ){
    string choice,name1,name2,choice2,choice5,choice6;
    int choice3;
    double choice4;

    cout<<"1. Name\n";
    cout<<"2. Sex\n";
    cout<<"3. Age\n";
    cout<<"4. Height\n";
    cout<<"5. Sexual Prefrence\n";
    cout<<"6. Intrests\n";
    cout<<"What would you like to change: ";
    cin>>choice;
    if(choice=="1"){
        cout<<"What is your first name: ";
        cin>>name1;
        cout<<"What is your last name: ";
        cin>>name2;
    }
    

}
void gatheringData(string sex,string firstName, string lastName, int age, double height, string sexual_prefrence, string intrests){
    cout<<"\\\\\\\\\\\\\\\\\\\\Dene's Dating Application///////////////////\n";
    cout<<"|                Welcome to Love at first glance!    |\n";
    cout<<"|What is your sex(Male/Female): ";
    getline(cin>>ws,sex);
    cout<<"|What is your first name: ";
    getline(cin>>ws,firstName);
    cout<<"|What is your last name: "; 
    getline(cin>>ws,lastName);
    cout<<"|How old are you: ";
    cin>>age;
    cout<<"|How tall are you(inches): ";
    cin>>height;
    cout<<"|What is your sexual prefrence: ";
    getline(cin>>ws,sexual_prefrence);
    cout<<"|What is your hobby or intrests: ";
    getline(cin>>ws,intrests);
}
void findPartner();

int main()
{   
    int age;
    int height;
    string sex, firstName, lastName, sexual_prefrence, intrests,change;
    bool girls = false, boys = false;
    
    gatheringData(sex,firstName,lastName,age,height,sexual_prefrence,intrests);
    double true_height = findHeight(height);
    string height_true = to_string(true_height);
    char feet = height_true[0];
    char inches = height_true[2];

    user1 User;
    User.age_ = age;
    User.first_Name_ = firstName;
    User.last_Name_ = lastName;
    User.sex_ = sex;
    User.feet_ = feet;
    User.inches_ = inches;
    User.intrests_ = intrests;
    User.sexual_prefrence_ = sexual_prefrence;
    User.print_Details();
    cout<<"|Would you like to change any of your information: ";
    cin>>change;
    if(change=="yes"||change=="YES"||change=="Y"||change=="y"){
        Change(age,firstName,lastName,sex,sexual_prefrence,intrests,feet,inches);
    }

    return 0;
}
