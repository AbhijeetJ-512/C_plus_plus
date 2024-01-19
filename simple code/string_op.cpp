#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3;
    str1 = "abhijeet";
    str2 = "Jadhav";
    cout << str1 + " " + str2 + "\n";
    if (str1 == str2)
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }
    cout << "\nEnter string\n";
    cin >> str3;
    cout << "the string entered is " << str3 + "\n";
    cout << str1.length();
}