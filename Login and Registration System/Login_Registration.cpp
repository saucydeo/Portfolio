#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void LOGIN(string USERNAME, string PASSWORD);
void REGISTRATION(string NEW_USERNAME, string NEW_PASSWORD);

int main(){

    string LOGIN_REGISTRATION, USERNAME,
    PASSWORD, NEW_USERNAME,
    NEW_PASSWORD;

    cout << "##############Login and Registration##############\n";

    while(1==1){
        cout << "1. Login\n" << "2. Registration\n";
        cout << "Enter (L/R): ";
        cin >> LOGIN_REGISTRATION;

        if(LOGIN_REGISTRATION == "L" || LOGIN_REGISTRATION == "l"){
            LOGIN(USERNAME, PASSWORD);
            break;
        }
        else if(LOGIN_REGISTRATION == "R" || LOGIN_REGISTRATION == "r"){
            cout << "##############Registration##############\n";
            cout << "Username: ";
            getline(cin >> ws, NEW_USERNAME);
            cout << "Password: ";
            getline(cin >> ws, NEW_PASSWORD);
            REGISTRATION(NEW_USERNAME, NEW_PASSWORD);
        }
        else if(LOGIN_REGISTRATION.empty()){
            cout << "Enter (L/R): ";
            cin >> LOGIN_REGISTRATION;
        }
        else if(LOGIN_REGISTRATION == "exit"){
            cout << "##############Login and Registration##############\n";
            break;
        }
        else{
            cout << "Enter (L/R): ";
            cin >> LOGIN_REGISTRATION;
        }
    }

    return 0;
}
void REGISTRATION(string NEW_USERNAME, string NEW_PASSWORD){
    ofstream ACCOUNTS("Accounts.txt");
    if(!ACCOUNTS.is_open())
    {
        cout<<"could not open file\n";
    }
    ACCOUNTS << NEW_USERNAME << '\n';
    ACCOUNTS << NEW_PASSWORD << '\n';
    ACCOUNTS.close();
}
void LOGIN(string USERNAME, string PASSWORD)
{
    string username, password;

    ifstream f("Accounts.txt");
    if(!f.is_open())
    {
        cout<<"could not open file\n";
    }
    getline(f, username, '\n');
    getline(f, password, '\n');
    f.close();

    while(1)
    {
        cout << "##############Login##############\n";
        cout << "Username: ";
        getline(cin >> ws, USERNAME);
        if(USERNAME == "exit"){
            cout << "##############Login and Registration##############\n";
            break;
        }
        cout << "Password: ";
        getline(cin >> ws, PASSWORD);
        if(PASSWORD == "exit"){
            cout << "##############Login and Registration##############\n";
            break;
        }

        if(USERNAME==username && PASSWORD==password){
            cout << "Login Successful\n";
            cout << "##############Login and Registration##############\n";
            break;
        }
        else{
            cout << "Wrong username or password.\n";
        }
    }
    
}