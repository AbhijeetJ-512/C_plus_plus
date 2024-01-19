#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int>arr;
    for(int i=0;i<6;i++)
    {
        arr.push_back(i);
    }
    arr.pop_back();
    arr.insert(arr.begin() + 4, 0);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"1"<<std::setw(40)<<"efw"<<endl;
}