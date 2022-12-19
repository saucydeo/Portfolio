#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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
            cout<<"|Full name is: "<<first_Name_+" "+last_Name_<<"\n";
            cout<<"|Your sex is: "<<sex_<<"\n";
            cout<<"|Your age is: "<<age_<<"\n";
            cout<<"|Your height is: "<<feet_<<"'"<<inches_<<"\n";
            cout<<"|Your partner's sex: "<<sexual_prefrence_<<"\n";
            cout<<"|Intrests: "<<intrests_<<"\n";
        }
        int getAge(){
            return age_;
        }
};
class generatedPartner{
    public:
        string generatedSex,
        generatedHair,generatedLastname,
        generatedFirstname, generatedIntrests,
        generatedHeight;
        int generatedAge;

    public:
        void printPartnerDetails(){
            cout<<"\\\\\\\\\\\\\\\\\\\\"<<generatedFirstname<<"'s Dating Information///////////////////\n";
            cout<<"|Name: "<<generatedFirstname+" "+generatedLastname<<endl;
            cout<<"|Age: "<<generatedAge<<endl;
            cout<<"|Sex: "<<generatedSex<<endl;
            cout<<"|Hair color: "<<generatedHair<<endl;
            cout<<"|Height: "<<generatedHeight<<endl;
            cout<<"|Intrests: "<<generatedIntrests<<endl;
        }
};
void dateSecured(string sex){
    srand(time(NULL));
    int message;

    cout<<"\\\\\\\\\\\\\\\\\\\\Direct Messages///////////////////\n";
    cout<<"You said: Hey\n";
    if(sex=="Female"){
        sleep(2);
        cout<<"She said: Hello\n";
        sleep(2);
        cout<<"You said: You are very pretty\n";
        sleep(1);
        cout<<"She said: Thank you\n";
        sleep(1);
        cout<<"She said: You're very handsome lol\n";
        sleep(2);
        cout<<"You said: Would you like to go on a date?\n";
        sleep(3);
        cout<<"She said: Sounds like a plan lol\n";
        sleep(2);
        cout<<"You said: I'll see you there!";
        cout<<"\\\\\\\\\\\\\\\\\\\\Congrulations!///////////////////\n";
    }
    if(sex=="Male"){
        sleep(2);
        cout<<"He said: Yo\n";
        sleep(1);
        cout<<"He said: You're beauty is mesmerizing\n";
        sleep(1);
        cout<<"You said: Awww, Thank you\n";
        sleep(1);
        cout<<"You said: You're handsome yourself\n";
        sleep(3);
        cout<<"He said: May I take you on a date princess? \n";
        sleep(1);
        cout<<"You said: Of course.\n";
        sleep(1);
        cout<<"He said: I'll see you there miss.";
        cout<<"\\\\\\\\\\\\\\\\\\\\Congrulations!///////////////////\n";
    }
    
    
}
void generateMale(int agge){
    srand(time(NULL));

    const string color[] = {"Blonde","Black","Brown","Red"};
    const string boy_Names[] = {"Liam","Noah","Joshua","James",
        "Will","Lucas","Andrew","Bob","Jacob","Larry","Micheal","Patrick",
        "Elijah","Klaus","Chris"};
    const string last_Names[] = {"Simpson","Johnson","Jones","Wilson",
        "Thomas","Reynolds","Robinson","Thompson","Hawkins","Miller","Clark",
        "Walker","Green","Jackson","Carter"};
    const string intrests_selction[] = {"Swimming","Rock Climbing","Making Money","Making Music",
        "Camping","Building","Bowling","Working out","Learning","Gardening",
        "Hunting","Yoga","Parkour"};
    const string heights[] = {"6'0","6'1","6'3","6'2","5'5","5'6",
        "5'7","5'8","5'9","5'10","5'4","5'5","5'11"};
    const int ages[] = {1,2,3,4,5};
    while(true){
    int randIndex = rand() % 4;
    int randIndex_2 = rand() % 15;
    int randIndex_5 = rand() % 16;
    int randIndex_3 = rand() % 13;
    int randIndex_4 = rand() % 5;
    string male_sex = "Male";
    string hair_color = color[randIndex];
    string malefirst_name = boy_Names[randIndex_2];
    string malelast_name = last_Names[randIndex_5]; 
    string male_intrests = intrests_selction[randIndex_3];
    string male_height_ = heights[randIndex_3];
    string skip;
    user1 User;
    int age = ages[randIndex_4] + User.age_; 

    generatedPartner Male;
    Male.generatedFirstname = malefirst_name;
    Male.generatedLastname = malelast_name;
    Male.generatedHeight = male_height_;
    Male.generatedIntrests = male_intrests;
    Male.generatedAge = age;
    Male.generatedHair = hair_color;
    Male.generatedSex = male_sex;
    Male.printPartnerDetails();
    cout<<"|Would you like to skip or date: ";
    cin>>skip;
    if(skip=="skip"||skip=="Skip"||skip=="SKIP"){
    int randIndex = rand() % 4;
    int randIndex_2 = rand() % 15;
    int randIndex_3 = rand() % 13;
    int randIndex_4 = rand() % 5;
    string male_sex = "Male";
    string hair_color = color[randIndex];
    string malefirst_name = boy_Names[randIndex_2];
    string malelast_name = last_Names[randIndex_2]; 
    string male_intrests = intrests_selction[randIndex_3];
    string male_height_ = heights[randIndex_3];
    string skip;
    user1 User;
    int age = ages[randIndex_4] + User.age_;

    generatedPartner Male;
    Male.generatedFirstname = malefirst_name;
    Male.generatedLastname = malelast_name;
    Male.generatedHeight = male_height_;
    Male.generatedAge = age;
    Male.generatedIntrests = male_intrests;
    Male.generatedHair = hair_color;
    Male.generatedSex = male_sex;
    Male.printPartnerDetails();
    cout<<"|Would you like to skip or date: ";
    cin>>skip;
    }
    else if(skip=="date"||skip=="Date"||skip=="DATE"){
        dateSecured(male_sex);
        break;
    }
    }
}
void generateFemale(int agge){
    srand(time(NULL));

    const string color[] = {"Blonde","Black","Brunette","Red"};
    const string girl_Names[] = {"Olivia","Emma","Janiyah","Spohia",
        "Mia","Evelyn","Luna","Lisa","Camila","Layla","Madison","Niyah",
        "Ivy","Maya","Claire"};
    const string last_Names[] = {"Williams","Johnson","Jones","Wilson",
        "Thomas","Taylor","Moore","Thompson","Perez","Harris","Clark",
        "Walker","Green","Adams","Diaz"};
    const string intrests_selction[] = {"Traveling","Dancing","Singing","Journaling",
        "Acting","Writing","Painting","Working out","Reading","Gardening",
        "Photography","Yoga","Star Gazing"};
    const string heights[] = {"5'0","5'1","5'3","5'4","5'5","5'6",
        "5'7","5'8","5'9","5'10","5'11","4'11","4'10"};
    const int ages[] = {1,2,3,4,5};
    while(true){
    int randIndex = rand() % 4;
    int randIndex_2 = rand() % 15;
    int randIndex_5 = rand() % 16;
    int randIndex_3 = rand() % 13;
    int randIndex_4 = rand() % 5;
    string female_sex = "Female";
    string hair_color = color[randIndex];
    string femalefirst_name = girl_Names[randIndex_2];
    string femalelast_name = last_Names[randIndex_5]; 
    string female_intrests = intrests_selction[randIndex_3];
    string female_height_ = heights[randIndex_3];
    string skip;
    user1 User;
    int age = ages[randIndex_4] + User.age_;

    generatedPartner Female;
    Female.generatedFirstname = femalefirst_name;
    Female.generatedLastname = femalelast_name;
    Female.generatedHeight = female_height_;
    Female.generatedIntrests = female_intrests;
    Female.generatedHair = hair_color;
    Female.generatedAge = age;
    Female.generatedSex = female_sex;
    Female.printPartnerDetails();
    cout<<"|Would you like to skip or date: ";
    cin>>skip;
    if(skip=="skip"||skip=="Skip"||skip=="SKIP"){
    int randIndex = rand() % 4;
    int randIndex_2 = rand() % 15;
    int randIndex_3 = rand() % 13;
    int randIndex_4 = rand() % 5;
    string female_sex = "Female";
    string hair_color = color[randIndex];
    string femalefirst_name = girl_Names[randIndex_2];
    string femalelast_name = last_Names[randIndex_2]; 
    string female_intrests = intrests_selction[randIndex_3];
    string female_height_ = heights[randIndex_3];
    string skip;
    user1 User;
    int age = ages[randIndex_4] + User.age_;

    generatedPartner Female;
    Female.generatedFirstname = femalefirst_name;
    Female.generatedLastname = femalelast_name;
    Female.generatedHeight = female_height_;
    Female.generatedIntrests = female_intrests;
    Female.generatedHair = hair_color;
    Female.generatedAge = age;
    Female.generatedSex = female_sex;
    Female.printPartnerDetails();
    cout<<"|Would you like to skip or date: ";
    cin>>skip;
    }
    else if(skip=="date"||skip=="Date"||skip=="DATE"){
        dateSecured(female_sex);
        break;
    }
    } 
}
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
    cout<<"|What is your sexual prefrence(Male/Female): ";
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
                cout<<"2. Sex(Male/Female)\n";
                cout<<"3. Age\n";
                cout<<"4. Height\n";
                cout<<"5. Sexual Prefrence(Male/Female)\n";
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
        else if(change=="no"||change=="No"||change=="NO"||change=="N"||change=="n" && User.sexual_prefrence_ == "Female"){
            generateFemale(User.getAge());
            break;
        }
        else if(change=="no"||change=="No"||change=="NO"||change=="N"||change=="n" && User.sexual_prefrence_ == "Male"){
            generateMale(User.getAge());
            break;
        }
    }
}
void findPartner();
int main()
{   
    int age;
    int height;
    string sex, firstName, lastName, sexual_prefrence, intrests,change;
    bool girls = false, boys = false;
    
    gatheringData(sex,firstName,lastName,age,height,sexual_prefrence,intrests,change);

    return 0;
}
