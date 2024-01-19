#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <unordered_map>

using namespace std;

class Task
{
private:
    string title;
    bool completed;

public:
    Task(const string &t) : title(t), completed(false) {}

    std::string getTitle() const
    {
        return title;
    }

    bool isCompleted() const
    {
        return completed;
    }

    void markAsCompleted()
    {
        completed = true;
    }
};

class Project
{
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string &title)
    {
        tasks.push_back(Task(title));
        std::cout << "Task added: " << title << std::endl;
    }

    void completeTask(int index)
    {
        if (index >= 0 && index < tasks.size())
        {
            tasks[index].markAsCompleted();
            std::cout << "Task marked as completed: " << tasks[index].getTitle() << std::endl;
        }
        else
        {
            std::cout << "Invalid task index." << std::endl;
        }
    }

    void displayTasks() const
    {
        if (tasks.empty())
        {
            std::cout << "No tasks available." << std::endl;
        }
        else
        {
            std::cout << "Task List:" << std::endl;
            std::cout << std::setw(4) << "ID" << std::setw(20) << "Title" << std::setw(12) << "Status" << std::endl;
            std::cout << std::string(40, '-') << std::endl;

            for (size_t i = 0; i < tasks.size(); ++i)
            {
                std::cout << std::setw(4) << i << std::setw(20) << tasks[i].getTitle()
                          << std::setw(12) << (tasks[i].isCompleted() ? "Completed" : "Pending") << std::endl;
            }
        }
    }
};
class User
{
    string pwd;

public:
    string user_id;
    int choice;
    unordered_map<string, string> dictionary;
    void check();
};
void User::check()
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

int findIndex(const std::vector<int> &vec, int value)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == value)
        {
            return static_cast<int>(i); // Found the value, return its index
        }
    }
    return -1; // Value not found in the vector
}

int main()
{
    vector<User> account_handler;
    User new_user;
    while (1)
    {
        char c;
        char newuserid[30], newpassword[30];
        cout << "Enter Login,SignUP,exit:";
        cin >> c;
        switch (c)
        {
        case 'L':
        case 'l':
            new_user.check();
            account_handler.push_back(new_user);
            break;
        case 'S':
        case 's':
            break;
        case 'E':
        case 'e':
            exit(0);
            break;

        default:
            break;
        }
    }
}