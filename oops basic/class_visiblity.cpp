#include <iostream>
using namespace std;
class Myclass
{
private:
    int x;

public:
    int fun(void)
    {
        return 2 + x;
    }
};
int main()
{
    Myclass obj;
    // obj.x = 4; //gives error bcoz x is private
    cout << obj.fun() << endl;
}