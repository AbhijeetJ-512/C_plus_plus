#include <iostream>
using namespace std;

int sum_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int sum, n;
    cin >> n;
    sum = sum_n(n);
    cout << sum;
    return 0;
}