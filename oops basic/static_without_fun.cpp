#include <iostream>
using namespace std;
class A
{
private:
    static int x;

public:
    A()
    {
        x = x + 1;
    }
    ~A()
    {
    }
    void display()
    {
        cout << x;
    }
};
int A::x = 1;
int main()
{
    A obj;
    obj.display();
    return 0;
}