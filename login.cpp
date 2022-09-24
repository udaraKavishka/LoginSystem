#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn(){
    string username,password,un,pw;

    cout << "Enter username: "; cin>> username;
    cout << "Enter password:  "; cin >> password;

   /* ifstream read("C:" + username + ".txt");
    getline (read, un);
    getline (read, pw);*/

    ifstream file (username+".text");
    getline(file,un);
    getline(file,pw);

    if (un== username && pw == password)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main()
{
    int choice ;
        cout <<"************************************\n";
        cout <<"*********** LOGIN SYSTEM ***********\n";
        cout <<"************************************\n";

    cout << "1: Register\n2: Login\nYour Choice "; cin >> choice;
    if (choice == 1)    
    {
        string username, password;




        cout << "Select a username: "; cin >> username;
        cout << "Select a password: "; cin >> password;

      /*  ofstream file;
         file( username + ".txt");
         */
        ofstream file (username +".text");

        file << username <<endl << password;

        file.close();
        main();

    }
    else if (choice == 2)
    {
        bool status = IsLoggedIn();

        if (!status)
        {
            cout << "Login Failed!" << endl;
            system("Pause");
            return 0;
        }
        else{
            cout << "Succesfully Logged in!" << endl;
            system("Pause");
            return 1;
        }
        
    }
    
    
}