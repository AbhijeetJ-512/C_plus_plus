#include <iostream>
using namespace std;
class Base
{
protected:
    int x, y;

public:
    void take_input(void)
    {
        cout << "enter values" << endl;
        cin >> x >> y;
    }
};
class Child : public Base
{
public:
    void display(void)
    {
        cout << "output sum is " << x + y;
    }
};
int main(void)
{
    Child obj;
    obj.take_input();
    obj.display();
}