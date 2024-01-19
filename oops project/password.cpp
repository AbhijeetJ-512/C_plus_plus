#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class cred
{
    string pwd;

public:
    string user_id;
    int choice;
    unordered_map<string, string> dictionary;
    void check();
};
void cred::check()
{
    cout << "Log-in(1) or Sign-up(2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter user id: ";
        cin >> user_id;
        auto iterator = dictionary.find(user_id);

        if (iterator != dictionary.end())
        {
            cout << "Enter password: ";
            cin >> pwd;
            if (pwd == iterator->second)
            {
                cout << "Login successful." << endl;
            }
            else
            {
                cout << "Incorrect password." << endl;
            }
        }
        else
        {
            cout << "User id does not exist." << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Enter user id: ";
        cin >> user_id;
        cout << "Enter password: ";
        cin >> pwd;
        dictionary[user_id] = pwd;
        cout << "Account created successfully." << endl;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
}

int main()
{
    cred c;
    while (1)
    {
        c.check();
    }
    return 0;
}