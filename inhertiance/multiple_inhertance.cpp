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
class four_wheller
{
public:
    four_wheller()
    {
        cout << "THis 4 wheller" << endl;
    }
};
class Car : public Vehicle, public four_wheller
{
public:
    Car()
    {
        cout << "car created" << endl;
    }
};
int main(void)
{
    Car obj;
    return 0;
}