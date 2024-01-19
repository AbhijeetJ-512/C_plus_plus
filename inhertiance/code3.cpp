#include <iostream>
using namespace std;
class Animal
{
public:
    string colour, eating_type;
    int num_legs;
};
class Dog : public Animal
{
public:
    string name;
    void get_color(void)
    {
        cin >> colour;
    }
    void get_eating_type(void)
    {
        cin >> eating_type;
    }
    void get_numlegs()
    {
        cin >> num_legs;
    }
    void get_name(void)
    {
        cin >> name;
    }
};
int main(void)
{
    Dog obj;
    cout << "enter name";
    obj.get_name();
    cout << "TEll color";
    obj.get_color();
    cout << "give eating type";
    obj.get_eating_type();
    cout << "Deatils";
    cout << "name: " << obj.name << endl
         << "color" << obj.colour << endl
         << "type: " << obj.eating_type << endl;
}