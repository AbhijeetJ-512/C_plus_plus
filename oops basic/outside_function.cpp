#include <iostream>
using namespace std;
class Myclass
{
public:
    int data = 5;
    void printdata(void)
    {
        cout << "data is " << data << endl;
    }
    void printdata1(void);
};
void Myclass::printdata1(void)
{
    cout << "data is " << data + 1 << endl;
}

int main()
{
    Myclass obj;
    obj.printdata();
    obj.printdata1();
}