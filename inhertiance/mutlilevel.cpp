#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "this is vehicle" << endl;
    }
};
class four_wheller : public Vehicle
{
public:
    four_wheller()
    {
        cout << "THis 4 wheller" << endl;
    }
};
class Car : public four_wheller
{
public:
    Car()
    {
        cout << "car has 4 wheels" << endl;
    }
};
int main(void)
{
    Car obj;
    return 0;
}