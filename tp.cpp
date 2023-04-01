#include<iostream>
using namespace std;
class abc
{
    public:
    int a=10;
};
int main()
{
    abc *ptr;
    abc a;
    ptr=&a;
    cout<<ptr->a;
    return 0;
}