#include <iostream>
#include <string>
using namespace std;

int area(float breadth, float length)
{
    return breadth * length;
}
int perimeter(int breadth, int length)
{
    return 2 * (length * breadth);
}

int main()
{
    float length, breadth;
    cout << "Enter length and breadth\n";
    cin >> length >> breadth;
    cout << "area of given data " << area(length, breadth) << endl;
    cout << "preimeter of given data " << perimeter(length, breadth);
}