#include <iostream>
using namespace std;
int a = 2;
int main()
{
    int a = 3;
    cout << "global variable " << ::a << endl;
    cout << "local variable " << a << endl;
}