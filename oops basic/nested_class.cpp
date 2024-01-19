// how member class can access class member of inner class
#include <iostream>
using namespace std;
class Outerclass
{
private:
    int z;
    class innerclass
    {
        int y;
        void main(Outerclass *a)
        {
            cout << "Nested class " << a->z << endl; // this shows we can access private
        }
    };
};
int main()
{
}