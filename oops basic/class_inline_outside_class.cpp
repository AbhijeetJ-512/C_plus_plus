#include <iostream>
using namespace std;
class Myclass
{
public:
    int x, y;
    void get();
    int sum();
    int sub();
    int mul();
    int div();
};
inline void Myclass::get()
{
    cout << "Enter x and y values" << endl;
    cin >> x >> y;
}
inline int Myclass::sum()
{
    cout << "sum is " << x + y << endl;
}
inline int Myclass::sub()
{
    cout << "sub is " << x - y << endl;
}
inline int Myclass::mul()
{
    cout << "muliptication is " << x * y << endl;
}
inline int Myclass::div()
{
    if (y != 0)
    {
        cout << "division is " << x / y << endl;
    }
    else
    {
        cout << "not divisble by zero";
    }
}

int main(void)
{
    Myclass obj;
    obj.get();
    obj.sum();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}