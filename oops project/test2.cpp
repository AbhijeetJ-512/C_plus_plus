#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <iomanip>
using namespace std;

class Project
{
private:
    string project_name;
    vector<string> project_list;

public:
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

class Crendentials
{
private:
    string pwd;

public:
    string user_id;
    unordered_map<string, string> account_handler;
    string check();
};

string Crendentials::check()
{
    int choice;
    string username;
    cout << "Log-in(1) or Sign-up(2) or Exit(3): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter user id: ";
        cin >> user_id;
        auto iterator = account_handler.find(user_id);

        if (iterator != account_handler.end())
        {
            cout << "Enter password: ";
            cin >> pwd;
            if (pwd == iterator->second)
            {
                cout << user_id << " Logined successful. " << endl;
                return user_id;
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
        account_handler[user_id] = pwd;
        cout << "Account created successfully." << endl;
        return user_id;
    }
    else if (choice == 3)
    {
        exit(0);
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
}
class User : public Crendentials, public Project
{
public:
    string x;
    void performCheck()
    {
        x = check();
        // cout << "user id returned " << x << endl;
    }
};

class Management : public User
{
    vector<User> user;
    user.push_back(1);
};

int main()
{
    Management user;
    while (1)
    {
        user.performCheck();
    }
}