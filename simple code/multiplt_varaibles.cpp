#include <iostream>
using namespace std;
int main()
{
    // const int x = 2, y = 3, z = 4; // if const used cannot change the value
    int x, y, z;
    cout << "enter number  for x y z\n";
    cin >> x;
    cin >> y;
    cin >> z;
    cout << "the sum is " << x + y + z;
    return 0;
}