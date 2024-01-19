#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <iomanip>
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
class Project
{

public:
    string project_name;
    vector<string> project_list;
    void display_projects();
    void create_project_list()
    {
        cout << "Enter project Name";
        cin >> project_name;
        project_list.push_back(project_name);
    }
};

void Project::display_projects()
{
    if (project_list.empty())
    {
        cout << "No projects" << endl;
    }
    else
    {
        cout << "projectsList" << endl;
        cout << setw(4) << "ID" << setw(20) << "Project name" << endl;
        cout << string(30, '-') << endl;
        for (int i = 0; i < project_list.size(); i++)
        {
            cout << setw(4) << i << setw(20) << project_list[i] << endl;
        }
    }
}

class User : public Credentials, public Project
{
public:
    unordered_map<int, vector<string>> p;
    int ch;
    int performCheck()
    {
        int x = check();
        while (1)
        {
            cout << "Create(1) Display(2) Logout(3): ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                project_list = p[x];
                create_project_list();
                p[x] = project_list;
                break;
            case 2:
                project_list = p[x];
                display_projects();
                break;
            case 3:
                project_list.clear();
                return 0;
                break;
            }
        }
    }
};

class Management : public User
{
public:
    void run()
    {
        performCheck();
    }
};

int main()
{
    Management c;
    int x;
    while (1)
    {
        c.run();
        // if (x != -1)
        // {
        //     cout << "Index: " << x << endl;
        // }
    }

    return 0;
}