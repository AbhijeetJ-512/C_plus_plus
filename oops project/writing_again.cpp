#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Credentials
{
    string pwd;

public:
    string user_id;
    int choice;
    vector<pair<string, string>> account_handler;
    int check();
};

int Credentials::check()
{
    cout << "Log-in(1) or Sign-up(2) or Exit(3): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter user id: ";
        cin >> user_id;

        // Iterate through the vector to find the user_id
        for (size_t i = 0; i < account_handler.size(); ++i)
        {
            if (account_handler[i].first == user_id)
            {
                cout << "Enter password: ";
                cin >> pwd;
                if (pwd == account_handler[i].second)
                {
                    cout << user_id << " Logged in successfully. " << endl;
                    // Return the index of the logged-in user_id
                    return static_cast<int>(i);
                }
                else
                {
                    cout << "Incorrect password." << endl;
                }
            }
        }

        cout << "User id does not exist." << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter user id: ";
        cin >> user_id;
        cout << "Enter password: ";
        cin >> pwd;

        // Add new user credentials to the vector
        account_handler.push_back(make_pair(user_id, pwd));

        cout << "Account created successfully." << endl;
        // Return the index of the newly created user_id
        return static_cast<int>(account_handler.size() - 1);
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    // Return some suitable value indicating failure
    return -1;
}

int main()
{
    Credentials c;
    int x;
    while (1)
    {
        x = c.check();
        if (x != -1)
        {
            cout << "Index: " << x << endl;
        }
    }

    return 0;
}
