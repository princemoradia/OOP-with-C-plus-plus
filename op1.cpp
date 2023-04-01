#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
    space()
    {
        x=y=z=0;
    }
    space(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"The value of x is "<<x<<" y is "<<y<<" and z is "<<z<<endl;
    }
    void operator-();
};
void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s(3,4,5);
    s.display();
    -s;
    s.display();
}