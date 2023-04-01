#include<iostream>
using namespace std;
class demo
{
    int x,y,z;
    public:
    demo()
    {
        x=y=z=0;
    }
    demo(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"The value of x is "<<x<<" y is "<<y<<" and z is "<<z<<endl;
    }
    void operator--();
};
void demo::operator--()
{
    x=--x;
    y=--y;
    z=--z;
}
int main()
{
    demo d(4,5,6);
    d.display();
    --d;
    d.display();
    return 0;
}