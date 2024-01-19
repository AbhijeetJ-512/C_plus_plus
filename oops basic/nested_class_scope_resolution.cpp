// write c++ program for nested class using scope resolution operator
#include <iostream>
using namespace std;
class Outerclass
{
private:
    class inner_private
    {
    public:
        void test();
        void print()
        {
            cout << "nested class is private" << endl;
        }
    };

public:
    class inner_public
    {
    public:
        void print()
        {
            cout << "nested class is public" << endl;
        }
    };
    inner_public n1;
    inner_private n2;
    void show();
};
void Outerclass::inner_private::test()
{
    cout << "came" << endl;
}
void Outerclass::show()
{
    n1.print();
    n2.print();
    n2.test();
}
int main()
{
    Outerclass obj;
    obj.show();
}