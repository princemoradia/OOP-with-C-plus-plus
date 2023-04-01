#include<iostream>
using namespace std;
class  base
{
    public:
    void virtual display()
    {
        cout<<"This is base class"<<endl;
    }
};
class derived1 : public base
{
    public:
    void display()
    {
    cout<<"This is 1st derived class"<<endl;
    }
};
class derived2 : public base
{
    public:
    void display()
    {
        cout<<"This is 2nd derived class"<<endl;
    }
};
int main()
{
    derived1 abc;
    derived2 def;
    base *ptr;
    ptr=&abc;
    ptr->display();
    ptr=&def;
    ptr->display();
    return 0;   
}