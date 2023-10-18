#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    for (int i = 0; i < 5; i++)
    {

        cout << "enter 2 numbers\n";
        cin >> num1 >> num2;
        cout << "output=" << num1 + num2 << "\n";
    }
    return 0;
}