#include <iostream>
using namespace std;
class myclass
{
public:
    void printf();
};

void myclass::printf()
{
    cout << "hello";
}
int main()
{
    myclass obj;
    obj.printf();
    return 0;
}