#include<iostream>
using namespace std;
class shape
{
    public:
    int x;
    virtual void area()=0;
    void getdata()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
};
class circle : public shape
{
    public:
    void area()
    {
        cout<<"The area of circle is "<<3.14*x*x<<endl;
    }
};
class square : public shape
{
    public:
    void area()
    {
        cout<<"The area of square is "<<x*x<<endl;
    }
};
int main()
{
    circle c;
    square s;
    c.getdata();
    c.area();
    s.getdata();
    s.area();
    return 0;
}