#include <iostream>
using namespace std;
class Marks1
{
public:
    int marks1 = 10;
};
class Marks2 : public Marks1
{
public:
    int marks2 = 20;
};
class Marks3 : public Marks2
{
public:
    int marks3 = 30;
    float average(void)
    {
        return float((marks3 + marks1 + marks2)) / 3;
    }
};
int main()
{
    Marks3 obj;
    cout << obj.average();
}