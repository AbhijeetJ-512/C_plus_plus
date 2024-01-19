#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

class Credentials // used for credentials valaidation
{
private:
    string pwd;
    vector<pair<string, string>> account_handler; // store the user_id and password

public:
    string user_id;
    int choice;
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
                    return -1;
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
        return account_handler.size() - 1;
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

class Task // class for tasks
{
public:
    string task_name;
    bool completed;

    Task(string name) : task_name(name), completed(false) {}

    void markAsCompleted()
    {
        completed = true;
    }
};

class Project
{
public:
    string project_name;
    vector<Task> tasks;
    void displayTasks();

    void createTask(string task_name)
    {
        tasks.push_back(Task(task_name));
    }
    void markAsCompleted(int index);
};
void Project::displayTasks()
{
    if (tasks.empty())
    {
        cout << "No tasks" << endl;
    }
    else
    {
        cout << "Tasks List" << endl;
        cout << setw(4) << "ID" << setw(20) << "Task name" << setw(12) << "Status" << endl;
        cout << string(40, '-') << endl;
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << setw(4) << i << setw(20) << tasks[i].task_name
                 << setw(12) << (tasks[i].completed ? "Completed" : "Pending") << endl;
        }
    }
}

void Project::markAsCompleted(int index)
{
    if (index >= 0 && index < tasks.size())
    {
        tasks[index].markAsCompleted();
        cout << "Task marked as completed: " << tasks[index].task_name << endl;
    }
    else
    {
        cout << "Invalid task index." << endl;
    }
}

class User : public Credentials
{
public:
    int ch;
    map<string, vector<Project>> user_projects;
    void displayProjects();
    void createProject();
    int selectProject();
    void performTaskOperations(Project &selected_project);
    void performProjectOperations();
    int performCheck();
};
void User::displayProjects()
{
    if (user_projects[user_id].empty())
    {
        cout << "No projects" << endl;
    }
    else
    {
        cout << "Projects List" << endl;
        cout << setw(4) << "ID" << setw(20) << "Project name" << endl;
        cout << string(30, '-') << endl;
        for (int i = 0; i < user_projects[user_id].size(); i++)
        {
            cout << setw(4) << i << setw(20) << user_projects[user_id][i].project_name << endl;
        }
    }
}
void User::createProject()
{
    string project_name;
    cout << "Enter project Name: ";
    cin >> project_name;

    Project new_project;
    new_project.project_name = project_name;

    user_projects[user_id].push_back(new_project);
}
int User::selectProject()
{
    int project_index;
    displayProjects();
    cout << "Select project  ID: ";
    cin >> project_index;
    return project_index;
}
void User::performTaskOperations(Project &selected_project)
{
    while (1)
    {
        cout << "Task Operations: (1: Create Task, 2: Display Tasks, 3: Complete Task, 4: Back): ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            string task_name;
            cout << "Enter task name: ";
            cin >> task_name;
            selected_project.createTask(task_name);
            break;
        }
        case 2:
            selected_project.displayTasks();
            break;
        case 3:
        {
            int taskIndex;
            cout << "Enter task index to complete: ";
            cin >> taskIndex;
            selected_project.markAsCompleted(taskIndex);
            break;
        }
        case 4:
            return;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
}
void User::performProjectOperations()
{
    int project_index = selectProject();
    if (project_index >= 0 && project_index < user_projects[user_id].size())
    {
        Project &selected_project = user_projects[user_id][project_index];
        performTaskOperations(selected_project);
    }
    else
    {
        cout << "Invalid project index." << endl;
    }
}

int User::performCheck()
{
    int x;
    while (1)
    {
        x = check();
        if (x >= 0)
        {
            bool isLoggedOut = false;
            while (!isLoggedOut)
            {
                cout << "Operations: (1: Create Project, 2: Display Projects, 3: Perform Project Operations, 4: Logout): ";
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
                    performProjectOperations();
                    break;
                case 4:
                    isLoggedOut = true;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "Login failed. Please try again." << endl;
        }
    }
    return 0;
}

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
    while (1)
    {
        c.run();
    }

    return 0;
}
