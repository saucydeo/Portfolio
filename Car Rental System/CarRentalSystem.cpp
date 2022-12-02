#include <iostream>
#include <string>
using namespace std;

void Car_Rental(string USERNAME);
 
class Car{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;

};
class SUV{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;

};
class Truck{
    public:
        string name;
        string model;
        int price;
        int car_no;
        int number_days;
        int cleaning_fee;
        int damages;

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
    string car, choice;
    int days;
    Car car1;
    car1.name = "Car";
    car1.model = "A";
    car1.price = 260;
    car1.car_no = 5678;
    car1.number_days = days;
    car1.cleaning_fee = 25;
    car1.damages = 160;

    SUV car2;
    car2.name = "SUV";
    car2.model = "B";
    car2.price = 350;
    car2.car_no = 7891;
    car2.number_days = days;
    car2.cleaning_fee = 75;
    car2.damages = 175;

    Truck car3;
    car3.name = "Truck";
    car3.model = "C";
    car3.price = 400;
    car3.car_no = 3459;
    car3.number_days = days;
    car3.cleaning_fee = 90;
    car3.damages = 225;

    cout<<"            Car Rental           \n";
    cout<<"////////////////////////////////////\n";
    cout<<"Car Rental Engine: What car type of are you looking for(car,SUV,truck): ";
    cin>>car;
    cout<<"Car Rental Engihe: How long will you rent this car: ";
    cin >> days;
    cout<<"              Car Rental Recipet          \n";
    cout<<"/////////////////////////////////////////////\n";
    if(car == "car")
    {
        cout<<"|Name: "<<car1.name<<"                         |\n";
        cout<<"|Model: "<<car1.model<<"                          |\n";
        cout<<"|Number of days: "<<days<<"                 |\n";
        cout<<"|Price: "<<car1.price*days<<"                       |\n";
        cout<<"|Car Number: "<<car1.car_no<<"                  |\n";
        cout<<"|Cleaning fee: "<<car1.cleaning_fee<<"                  |\n";
        cout<<"|Car damages: "<<car1.damages<<"                  |\n";
        cout<<"|Total: "<<car1.price*days+car1.cleaning_fee+car1.damages<<"                       |\n";
    }
    else if(car == "SUV"||car=="suv"){
        cout<<"|Name: "<<car2.name<<"                         |\n";
        cout<<"|Model: "<<car2.model<<"                          |\n";
        cout<<"|Number of days: "<<days<<"                 |\n";
        cout<<"|Price: "<<car2.price*days<<"                       |\n";
        cout<<"|Car Number: "<<car2.car_no<<"                  |\n";
        cout<<"|Cleaning fee: "<<car2.cleaning_fee<<"                  |\n";
        cout<<"|Car damages: "<<car2.damages<<"                  |\n";
        cout<<"|Total: "<<car2.price*days+car1.cleaning_fee+car1.damages<<"                       |\n";
    }
    else if(car=="truck"||car=="TRUCK"){
        cout<<"|Name: "<<car3.name<<"                       |\n";
        cout<<"|Model: "<<car3.model<<"                          |\n";
        cout<<"|Number of days: "<<days<<"                 |\n";
        cout<<"|Price: "<<car3.price*days<<"                       |\n";
        cout<<"|Car Number: "<<car3.car_no<<"                  |\n";
        cout<<"|Cleaning fee: "<<car3.cleaning_fee<<"                  |\n";
        cout<<"|Car damages: "<<car3.damages<<"                  |\n";
        cout<<"|Total: "<<car3.price*days+car1.cleaning_fee+car1.damages<<"                       |\n";
    }

}