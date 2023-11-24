#include <iostream>
using namespace std;
class Parent
{
protected:
    int id_pro;

private:
    int id_private;

public:
    int id_public;
};
class Child : public Parent
{
public:
    int id_c;
    // id_pro = 5;
    // void test()
    // {
    //     id_pro = 10; // proteted can be only accessed using member function
    // }
};
int main()
{
    Child obj;
    cin >> obj.id_c;
    cin >> obj.id_public;
    // obj.id_private = 30;
    obj.id_pro = 40;b
    cout << obj.id_c << endl;
    cout << obj.id_public << endl;
    // cout << obj.id_private << endl;
    // cout << obj.id_pro << endl;   //cannot access private
}