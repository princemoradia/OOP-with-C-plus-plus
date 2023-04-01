#include<iostream>
using namespace std;
template<class T1, class T2>
class sample
{
    T1 a, T2 b;
    public:
    sample(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a is "<<a<<" and b is "<<b<<endl;
    }
};
int main()
{
    sample <int,float> s1(4,4.55);
    sample <int,char> s1(4,'c');
    s1.display();
    s2.display();
    return 0;
}