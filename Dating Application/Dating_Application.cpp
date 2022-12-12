#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void toUpper(std::string &str) {
    if (str.length() == 0) {
        return;
    }
 
    str[0] = std::toupper(str[0]);
}
class user1{
    public:
        int age_;
        char feet_, inches_;
        string sex_, first_Name_, last_Name_,
        sexual_prefrence_, intrests_, choice;

    public:
       void print_Details(){
            toUpper(first_Name_);
            toUpper(last_Name_);
            toUpper(sex_);
            toUpper(sexual_prefrence_);
            toUpper(intrests_);
            cout<<"\\\\\\\\\\\\\\\\\\\\"<<first_Name_<<"'s Dating Information///////////////////\n";
            cout<<"|Full name is: "<<first_Name_+" "+last_Name_<<"                          |\n";
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
void gatheringData(string sex,string firstName, string lastName, int age, double height, string sexual_prefrence, string intrests, string change){
    string choice,name1,name2,choice2,choice5,choice6;
    int choice3;
    double choice4;

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
    while(true){
        cout<<"|Would you like to change any of your information: ";
        cin>>change;
        if(change=="yes"||change=="YES"||change=="Y"||change=="y"){
                cout<<"1. Name\n";
                cout<<"2. Sex\n";
                cout<<"3. Age\n";
                cout<<"4. Height\n";
                cout<<"5. Sexual Prefrence\n";
                cout<<"6. Intrests\n";
                cout<<"What would you like to change: ";
                cin>>choice;
                if(choice=="1"||choice=="Name"||choice=="name"){
                    cout<<"What is your first name: ";
                    cin>>name1;
                    cout<<"What is your last name: ";
                    cin>>name2;
                    User.first_Name_ = name1;
                    User.last_Name_ = name2;
                    User.print_Details();
                }
                else if(choice=="2"||choice=="sex"||choice=="Sex"){
                    cout<<"What is your sex: ";
                    cin>>choice2;
                    User.sex_ = choice2;
                    User.print_Details();
                }
                else if(choice=="3"||choice=="age"||choice=="Age"){
                    cout<<"What is your age: ";
                    cin>>choice3;
                    User.age_ = choice3;
                    User.print_Details();
                }
                else if(choice=="4"||choice=="Height"||choice=="height"){
                    cout<<"What is your height: ";
                    cin>>choice4;
                    double true_height = findHeight(choice4);
                    string height_true = to_string(true_height);
                    char feet_new = height_true[0];
                    char inches_new = height_true[2];
                    User.feet_ = feet_new;
                    User.inches_ = inches_new;
                    User.print_Details();
                }
                else if(choice=="5"||choice=="sexual prefrence"||choice=="Sexual prefrence"||choice=="Sexual Prefrence"){
                    cout<<"What is your sexual prefrence: ";
                    cin>>choice5;
                    User.sexual_prefrence_ = choice5;
                    User.print_Details();
                }
                else if(choice=="6"||choice=="intrests"||choice=="Intrests"){
                    cout<<"What is your intrests: ";
                    cin>>choice6;
                    User.intrests_ = choice6;
                    User.print_Details();
                }
        } 
        else if(change=="no"||change=="No"||change=="NO"||change=="N"||change=="n"){
            break;
        }
    }
}
void findPartner();
void generatePartners();
int main()
{   
    int age;
    int height;
    string sex, firstName, lastName, sexual_prefrence, intrests,change;
    bool girls = false, boys = false;
    
    gatheringData(sex,firstName,lastName,age,height,sexual_prefrence,intrests,change);

    return 0;
}
