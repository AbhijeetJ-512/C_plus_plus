#include <iostream>
using namespace std;
class A
{
public:
    int a = 6;
};
class B : public A
{
public:
    int a = 10;
    int b = 7;
};
class C : public A
{
public:
    int a = 30;
    int c = 8;
};
class D : public B, public C
{
public:
    int a = 60;
    int d = 9;
};
int main()
{
    D obj;
    cout << obj.B::a << endl;
    cout << obj.C::a << endl;
    cout << obj.D::a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;
    cout << obj.d << endl;
}