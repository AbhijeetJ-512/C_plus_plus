#include <iostream>
using namespace std;
class Myclass
{
private:
    int lenght, breadth;

public:
    int set_length(int i)
    {
        lenght = i;
    }
    int set_breadth(int i)
    {
        breadth = i;
    }
    int get_area(void)
    {
        return lenght * breadth;
    }
    int get_perimeter(void)
    {
        return 2 * (lenght + breadth);
    }
};
int main()
{
    Myclass obj;
    obj.set_length(3);
    obj.set_breadth(2);
    cout << "Area is " << obj.get_area() << endl;
    cout << "perimeter is " << obj.get_perimeter() << endl;
}