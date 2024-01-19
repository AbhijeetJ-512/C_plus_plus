#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Credentials
{
private:
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

        for (int i = 0; i < account_handler.size(); ++i)
        {
            if (account_handler[i].first == user_id)
            {
                cout << "Enter password: ";
                cin >> pwd;
                if (pwd == account_handler[i].second)
                {
                    cout << user_id << " Logged in successfully. " << endl;
                    return i;
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

        account_handler.push_back(make_pair(user_id, pwd));

        cout << "Account created successfully." << endl;
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
    return -1;
}

class Project
{
public:
    string project_name;
    vector<string> project_list;

    void displayProjects()
    {
        if (project_list.empty())
        {
            cout << "No projects" << endl;
        }
        else
        {
            cout << "Projects List" << endl;
            cout << setw(4) << "ID" << setw(20) << "Project name" << endl;
            cout << string(30, '-') << endl;
            for (int i = 0; i < project_list.size(); i++)
            {
                cout << setw(4) << i << setw(20) << project_list[i] << endl;
            }
        }
    }

    void createProject()
    {
        cout << "Enter project Name: ";
        cin >> project_name;
        project_list.push_back(project_name);
    }
};

class User : public Credentials, public Project
{
public:
    int ch;
    vector<vector<string>> user_list;

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
                createProject();
                break;
            case 2:
                displayProjects();
                break;
            case 3:
                user_list.push_back(project_list);
                project_list.clear();
                return 0;
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }
};

class Management : public User
{
public:
    int x;
    void run()
    {
        performCheck();
    }
};

int main()
{
    Management c;
    while (1)
    {
        c.run();
    }

    return 0;
}
