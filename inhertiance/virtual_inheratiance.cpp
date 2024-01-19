#include <iostream>
using namespace std;
class A
{
public:
    int a = 6;
};
class B : public virtual A
{
public:
    int b = 7;
};
class C : public virtual A
{
public:
    int c = 8;
};
class D : public B, public C
{
public:
    int d = 9;
};
int main()
{
    D obj;
    cout << obj.a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;
    cout << obj.d << endl;
}