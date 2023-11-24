// defining a nested class as public member of inner class
#include <iostream>
using namespace std;
class Outerclass
{
public:
    class inner
    {
    public:
        void print()
        {
            cout << "nested class is public" << endl;
        }
    };
    inner n;
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