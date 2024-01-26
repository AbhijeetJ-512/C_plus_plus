#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 0;
    try
    {
        if (b == 0)
        {
            throw "Division by zero";
        }
        cout << a / b << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
}