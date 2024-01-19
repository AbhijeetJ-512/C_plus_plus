#include <iostream>
using namespace std;

inline int cube(int integer)
{
    return integer * integer * integer;
}

inline float square(float number)
{
    return number * number;
}
int main()
{
    cout << cube(4) << endl;
    cout << square(4.5);
    return 0;
}
