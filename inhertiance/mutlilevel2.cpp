#include <iostream>
using namespace std;

class Organization
{
public:
    string o_name = "KLE TECH";
};
class Employee : public Organization
{
public:
    string name;
};
class Teacher : public Employee
{
public:
    string subject;
    int salary;
    void set_name(void);
    void set_salary(void);
    void set_subject(void);
    void get_details(void);
};
void Teacher::set_name(void)
{
    cout << "Enter name" << endl;
    cin >> name;
}
void Teacher::set_salary(void)
{
    cout << "enter salary" << endl;
    cin >> salary;
}
void Teacher::set_subject()
{
    cout << "enter subject" << endl;
    cin >> subject;
}
void Teacher::get_details(void)
{
    cout << "name of organization is " << o_name << endl
         << "Name of Teacher is " << name << endl
         << "Subject teaching " << subject << endl
         << "Salary " << salary << endl;
}
void take_details(Teacher obj)
{
    obj.set_name();
    obj.set_subject();
    obj.set_salary();
}
int main()
{
    Teacher obj;
    take_details(obj);
    obj.get_details();
    return 0;
}