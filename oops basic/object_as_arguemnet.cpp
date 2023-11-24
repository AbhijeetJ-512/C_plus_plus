// passing the object as arguement
// calculate avg marks
#include <iostream>
using namespace std;
class Student
{
public:
    double number;

    Student(double m) { number = m; } // constructor
};
void calc(Student s1, Student s2)
{
    double avg = (s1.number + s2.number) / 2;
    cout << "Average marks " << avg << endl;
}
int main()
{
    Student s1(40), s2(30);
    calc(s1, s2);
}