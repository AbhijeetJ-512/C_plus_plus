#include <iostream>
using namespace std;

int main()
{
    double num, den, arr[4] = {0, 2, 1, 5};
    int index;
    cout << "enter index" << endl;
    cin >> index;

    try
    {
        if (index >= 4)
        {
            throw "Index greater the 4";
        }
        den = arr[index];
        num = 3;
        if (den == 0)
        {
            throw 0;
        }
        cout << num / den << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    catch (const int n)
    {
        cout << "divide by zero error";
    }
    catch (...)
    {
        cout << "excpection not indentifyed";
    }
}