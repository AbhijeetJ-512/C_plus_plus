#include <iostream>
using namespace std;
class A
{
public:
    int x = 7;
    class B
    {
    private:
        int num;

    public:
        void getdata(int n)
        {
            num = n;
        }
        void putdata()
        {
            cout << num;
        }
    };
};
int main()
{
    A::B obj;
    obj.getdata(4);
    obj.putdata();
}