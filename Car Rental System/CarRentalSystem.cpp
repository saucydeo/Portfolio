#include <iostream>
#include <string>
using namespace std;

void Car_Rental(string USERNAME);
 
class Toyota{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;
    
    public:
        void printRecipet(int days){
            cout<<"|Name: "<<name<<"                         |\n";
            cout<<"|Model: "<<model<<"                                |\n";
            cout<<"|Number of days: "<<days<<"                          |\n";
            cout<<"|Price: "<<price*days<<"                                 |\n";
            cout<<"|Car Number: "<<car_no<<"                           |\n";
            cout<<"|Cleaning fee: "<<cleaning_fee<<"                           |\n";
            cout<<"|Car damages: "<<damages<<"                             |\n";
            cout<<"|Total: "<<price*days+cleaning_fee+damages<<"                                 |\n";
        }

};
class Mercedes{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;

    public:
        void printRecipet(int days){
            cout<<"|Name: "<<name<<"                        |\n";
            cout<<"|Model: "<<model<<"                             |\n";
            cout<<"|Number of days: "<<days<<"                          |\n";
            cout<<"|Price: "<<price*days<<"                                |\n";
            cout<<"|Car Number: "<<car_no<<"                           |\n";
            cout<<"|Cleaning fee: "<<cleaning_fee<<"                           |\n";
            cout<<"|Car damages: "<<damages<<"                             |\n";
            cout<<"|Total: "<<price*days+cleaning_fee+damages<<"                                |\n";
        }


};
class Mercedes_Gle{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;

    public:
        void printRecipet(int days){
            cout<<"|Name: "<<name<<"                        |\n";
            cout<<"|Model: "<<model<<"                           |\n";
            cout<<"|Number of days: "<<days<<"                          |\n";
            cout<<"|Price: "<<price*days<<"                                |\n";
            cout<<"|Car Number: "<<car_no<<"                           |\n";
            cout<<"|Cleaning fee: "<<cleaning_fee<<"                           |\n";
            cout<<"|Car damages: "<<damages<<"                             |\n";
            cout<<"|Total: "<<price*days+cleaning_fee+damages<<"                                |\n";
        }

};

int main()
{   
    string USERNAME, PASSWORD;
    string accounts[] = {"admin", "john", "root","kevianna"};
    string passwords[] = {"admin", "appleseed", "root","simpson"};

    cout<<"------------------------------\n";
    cout<<"            LOGIN           \n";
    cout<<"------------------------------\n";

    while(1){
    cout<<"Username: ";
    getline(cin >> ws, USERNAME);
    cout<<"Password: ";
    getline(cin >> ws, PASSWORD);

    if(USERNAME == accounts[0] && PASSWORD == passwords[0])
    {
        cout<<"Thank you for logging in "<<USERNAME<<"!\n";
        Car_Rental(USERNAME);
        break;
    }
    else if(USERNAME == accounts[1] && PASSWORD == passwords[1])
    {
        cout<<"Thank you for logging in "<<USERNAME<<"!\n";
        Car_Rental(USERNAME);
        break;
    }
    else if(USERNAME == accounts[2] && PASSWORD == passwords[2])
    {
        cout<<"Thank you for logging in "<<USERNAME<<"!\n";
        Car_Rental(USERNAME);
        break;
    }
    else if(USERNAME == accounts[3] && PASSWORD == passwords[3])
    {
        cout<<"Thank you for logging in "<<USERNAME<<"!\n";
        Car_Rental(USERNAME);
        break;
    }
    }

    return 0;
}
void Car_Rental(string USERNAME)
{
    int days,car;
    Toyota car1;
    car1.name = "Toyota Camry";
    car1.model = "2022";
    car1.price = 155;
    car1.car_no = 5678;
    car1.number_days = days;
    car1.cleaning_fee = 25;
    car1.damages = 0;

    Mercedes car2;
    car2.name = "Mercedes-Benz";
    car2.model = "C-Class";
    car2.price = 185;
    car2.car_no = 7891;
    car2.number_days = days;
    car2.cleaning_fee = 55;
    car2.damages = 0;

    Mercedes_Gle car3;
    car3.name = "Mercedes-Benz";
    car3.model = "GLE Coupe";
    car3.price = 225;
    car3.car_no = 3459;
    car3.number_days = days;
    car3.cleaning_fee = 90;
    car3.damages = 0;

    cout<<"            Car Rental           \n";
    cout<<"////////////////////////////////////\n";
    cout<<"1. 2022 Toyota Camry\n"<<"2. Mercedes-Benz C-Class\n"<<"3. Mercedes-Benz GLE Coupe\n";
    cout<<"Car Rental Engine: Pick an option, "<<USERNAME<<": ";
    cin>>car;

    while(1){
        switch(car){
        case 1:
            car1.printRecipet(days);
            break;
        case 2:
            car2.printRecipet(days);
            break;
        case 3:
            car3.printRecipet(days);
            break;
        default:
            cout<<"Car Rental Engine: Pick an option, "<<USERNAME<<": ";
            cin>>car;
            break;
    }
    }

    cout<<"Car Rental Engihe: How long will you rent this car: ";
    cin >> days;
    cout<<"              Car Rental Invoice          \n";
    cout<<"/////////////////////////////////////////////\n";

}
