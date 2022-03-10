//building an application for registration.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsloggedIn()
{
    string username, password,un, pw;
    cout << " Enter username:" << endl;
    cin>> username;
    cout << "Enter password:" << endl;
    cin>> password;

    ifstream read("c\\" + username + ".txt");
    getline(read, un);
    getline(read,pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
    int choice;
    cout << "1: Registration\n2: Login\nYour choice" << endl;
    if (choice == 1)
    {
        string username,password;
        cout << " Select a username:"<< endl;
        cin >> username;

        cout << "select a password";
        cin >> password;





    ofstream file;
    file.open("c\\" + username + ".txt");
    file << username << endl << password;
    file.close();





    main();
    }

else if (choice==2)
{
    bool status = IsloggedIn();

    if (!status)
        {

            cout << " Flase Login!" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "Successfully logged in!" << endl;
            system("PAUSE");
            return 1;
        }
    }

}
