#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "enter only postive number";
    while (1)
    {
        cin >> num;
        if (num < 0)
        {
            break;
        }
        sum = sum + num;
    }
    cout << sum;
    return 0;
}