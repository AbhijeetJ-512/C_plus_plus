#include <iostream>
using namespace std;

class Myclass
{
public:
    int addnumber(int num1, int num2)
    {
        return num1 + num2;
    }
};

int addnumber(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    int result = addnumber(3, 7);
    cout << result << endl;
    Myclass obj;
    cout << obj.addnumber(3, 5) << endl;
    return 0;
}