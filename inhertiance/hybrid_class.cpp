#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle class created" << endl;
    }
};
class Fare
{
public:
    Fare()
    {
        cout << "Fare class creates" << endl;
    }
};
class Bus : public Vehicle, public Fare
{
public:
    Bus()
    {
        cout << "Bus class created" << endl;
    }
};
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Car class created" << endl;
    }
};
int main()
{
    Car obj1;
    cout << endl;
    Bus obj2;
}