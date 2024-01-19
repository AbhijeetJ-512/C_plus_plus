#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

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
public:
    char user_id[30];
    char password[30];
    Project UserProject;

    void setUserDetails();
};

void User::setUserDetails()
{
    cout << "Enter user id";
    cin >> user_id;
    cin >> password;
}

int findIndex(const std::vector<int> &vec, int value)
{
    for (size_t i = 0; i < vec.size(); ++i)
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
    User testobject;
    testobject.UserProject.addTask("hee");
    testobject.UserProject.displayTasks();
    account_handler.push_back(testobject);
    while (1)
    {
        char c;
        cout << "Enter Login,SignUP,exit:";
        cin >> c;
        switch (c)
        {
        case 'L':
        case 'l':
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
    testobject.setUserDetails();
}