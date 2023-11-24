#include <iostream>
using namespace std;
class Square
{
public:
    double number;

    Square(double m) { number = m; } // constructor
};
void calc(Square s1)
{
    cout << "Average marks " << s1.number * s1.number << endl;
}
int main()
{
    Square s1(40);
    calc(s1);
}