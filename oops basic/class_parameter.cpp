// c++ program to illusrte working class and object to find area and volume of room
#include <iostream>
using namespace std;
class Room
{
public:
    int length, width, height, area, volume;
    Room(int x, int y, int z)
    {
        length = x;
        width = y;
        height = z;
        area = 2 * (length * width + length * height + height * width);
        volume = length * width * height;
    }
};
int main()
{
    Room room1(2, 3, 4);
    cout << "area is " << room1.area << endl
         << "volume is " << room1.volume << endl;
}