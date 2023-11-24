#include <iostream>
using namespace std;
class Myclass
{
public:
    int x, y;
    inline int sum()
    {
        return x + y;
    }
    inline int mul()
    {
        return x * y;
    }
    inline int sub()
    {
        return x - y;
    }
    inline int div()
    {
        if (y == 0)
        {
            cout << "Not divisble by 0" << endl;
        }
        else
        {
            return x / y;
        }
    }
};
int main(void)
{
    Myclass obj;
    obj.x = 10;
    obj.y = 3;
    cout << "sum is " << obj.sum() << endl
         << "subtraction is " << obj.sub() << endl
         << "multiplication is " << obj.mul() << endl
         << "divison is " << obj.div() << endl;
    return 0;
}