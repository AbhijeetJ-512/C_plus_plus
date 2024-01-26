#include <iostream>
using namespace std;

template <typename T>

T add(T num1, T num2)
{
    return num1 + num2;
}
int main()
{
    int res1;
    double res2;
    float res3;
    res1 = add<int>(2, 4);
    cout << "Res1=" << res1 << endl;
    res2 = add<float>(2.7, 4);
    cout << "Res2=" << res2 << endl;
    res3 = add<double>(2, 5);
    cout << "Res3=" << res3 << endl;
}