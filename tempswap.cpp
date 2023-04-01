#include<iostream>
using namespace std;
template <class T>
int swap(T& x,T& y)
{
    T t;
    t=x;
    x=y;
    y=t;
    return 0;
}
int main()
{
    int a,b;
    a=10,b=20;
    swap(a,b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;
    return 0;
}