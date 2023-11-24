#include <iostream>
using namespace std;
class Shape
{
protected:
    int length, width;

public:
    void get_length(int x);
    void get_width(int x);
};
void Shape::get_length(int x)
{
    length = x;
}
void Shape::get_width(int x)
{
    width = x;
}
class Rectangle : public Shape
{
public:
    int get_area()
    {
        return length * width;
    }
};
int main()
{
    Rectangle a;
    a.get_length(5);
    a.get_width(5);
    cout << a.get_area() << endl;
}