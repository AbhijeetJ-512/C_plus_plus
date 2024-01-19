#include <iostream>
using namespace std;
class Myclass
{
private:
    int x;

public:
    Myclass(int number)
    {
        x = number;
    }
    ~Myclass()
    {
        cout << "destoryed" << endl;
    }
    int getnumber()
    {
        return x;
    }
};
int main()
{
    Myclass obj(1);
    cout << "number is " << obj.getnumber() << endl;
}