// write a c++ program to display roll no and grade of 5 students read and display the content of the array
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int Salary;
    string itr;
    // Student(string x, int roll, string gradee)
    // {
    //     name = x;
    //     roll_no = roll;
    //     grade = gradee;
    // }
    void read()
    {
        cout << "enter name\n";
        cin >> name;
        cout << "Enter roll no\n";
        cin >> Salary;
        cout << "enter grade";
        cin >> itr;
    }
    void display()
    {
        cout << "name:" << name
             << " roll_no:" << Salary
             << " grade:" << itr << endl;
    }
};
int main()
{
    Employee student[5];
    for (int i = 0; i < 5; i++)
    {
        student[i].read();
    }
    for (auto i : student)
    {
        i.display();
    }
}