#include <iostream>
using namespace std;
class Student
{
protected:
    int Roll_no, marks1, marks2;

public:
    void get_marks_student(void)
    {
        cout << "enter roll no" << endl;
        cin >> Roll_no;
        cout << "enter subject marks" << endl;
        cin >> marks1 >> marks2;
    }
};
class Project
{
protected:
    int marks;

public:
    void get_marks_project(void)
    {
        cout << "enter project marks";
        cin >> marks;
    }
};
class Marks : public Student, public Project
{
public:
    float avg;
    float average_marks(void)
    {
        return float((marks + marks1 + marks2)) / 3;
    }
};

int main(void)

{
    Marks obj;
    obj.get_marks_student();
    obj.get_marks_project();
    cout << "average marks is " << endl
         << obj.average_marks();
}