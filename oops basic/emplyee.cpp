// write a c++ program to display roll no and grade of 5 students read and display the content of the array
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int Salary;
    string itr;
    void read()
    {
        cout << "enter name\n";
        cin >> name;
        cout << "Enter salary\n";
        cin >> Salary;
        itr = Salary * 0.05;
    }
    void display()
    {
        cout << "name:" << name
             << " salary:" << Salary
             << " ITR reduction:" << itr << endl;
    }
};
int main()
{
    Employee employee[5];
    for (int i = 0; i < 5; i++)
    {
        employee[i].read();
    }
    for (auto i : employee)
    {
        i.display();
    }
}