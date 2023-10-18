#include <iostream>
#include <string.h>
using namespace std;

char reverse(char str[], int i)
{
    if (i < strlen(str))
    {
        i++;
        reverse(str, i);
        cout << str[i - 1];
    }
}

int main()
{
    char str[20];
    cin >> str;
    reverse(str, 0);
}