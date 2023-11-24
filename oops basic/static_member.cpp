// write a c++ program to domstarte how staic daa member can be accessed with the help of static member function
#include <iostream>
using namespace std;
class A
{
private:
    static int x;

public:
    static int increment()
    {
        return ++x;
    }
};
int A::x = 10;
int main()
{
    A obj;
    cout << obj.increment();
    return 0;
}