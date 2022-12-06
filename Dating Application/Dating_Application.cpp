#include <iostream>
#include <string>
using namespace std;
class user1{
    public:
        int age_;
        char feet_, inches_;
        string sex_, first_Name_, last_Name_,
        sexual_prefrence_, intrests_;

    public:
       void print_Details(){
            cout<<"\\\\\\\\\\\\\\\\\\\\"<<first_Name_<<"'s Dating Information///////////////////\n";
            cout<<"|Full name is: "<<first_Name_ +" "+last_Name_<<"                         |\n";
            cout<<"|Your sex is: "<<sex_<<"                                           |\n";
            cout<<"|Your age is: "<<age_<<"                                           |\n";
            cout<<"|Your height is: "<<feet_<<"'"<<inches_<<"                                  |\n";
            cout<<"|Your partner's sex: "<<sexual_prefrence_<<"                  |\n";
        }
};
double findHeight(double height){
    double total = height/12;
    return total;
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

}
void findPartner();

int main()
{   
    int age;
    int height;
    string sex, firstName, lastName, sexual_prefrence, intrests;
    bool girls = false, boys = false;
    
    gatheringData(sex,firstName,lastName,age,height,sexual_prefrence,intrests);

    return 0;
}
