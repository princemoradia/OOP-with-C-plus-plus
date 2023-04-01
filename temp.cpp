/*Write a program to swap the numbers using the concept of function template.*/
#include<iostream>
using namespace std;
template <class Ttype>
class sample
{
    Ttype a,b;
    public:
    void setdata()
    {
        cin>>a>>b;
    }
    void getdata()
    {
        cout<<"sum is "<<a+b<<endl;
    }
};
int main()
{
    sample <int> s1;
    sample <float> s2;
    s1.setdata();
    s1.getdata();
    s2.setdata();
    s2.getdata();
    return 0;
}