#include <iostream>
using namespace std;

int main()
{
    int a[5], x, y;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i : a)
    {
        cout << i;
    }
}