#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A class created";
    }
};
class B : virtual public A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};
int main()
{
    D obj;
}