#include <iostream>
using namespace std;
class myclass
{
    static int x;

public:
    static int y;
    const int z = 4; // const cant change value later
    string str;
};
int myclass::x = 1;
int myclass::y = 3;
int main()
{
    myclass obj;
    // cout << obj.x << endl; // cant access
    cout << obj.y << endl;
    // obj.z = 3; // can't change
    return 0;
}