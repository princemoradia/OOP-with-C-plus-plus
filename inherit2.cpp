/*Write a program to multiply of the positive numbers using multiple inheritances.*/
#include<iostream>
using namespace std;
class num1
{
    public:
    int a;
    void set1()
    {
        cout<<"Enter the value of a :"<<endl;
        cin>>a;
    }
};
class num2
{
    public:
    int b;
    void set2()
    {
        cout<<"Enter the value of b :"<<endl;
        cin>>b;
    }
};
class mul : public num1 , public num2
{
    public:
    void result()
    {
        cout<<"The multiplication of a and b is "<<a*b<<endl;
    }
};
int main()
{
    mul m;
    m.set1();
    m.set2();
    m.result();
    return 0;
}