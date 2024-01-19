// defining nested class as private member of inner class
#include <iostream>
using namespace std;
class Outerclass
{
private:
    class inner
    {
    public:
        void print()
        {
            cout << "nested class is private" << endl;
        }
    };
    inner n;

public:
    void show()
    {
        n.print();
    }
};
int main()
{
    Outerclass obj;
    obj.show();
}