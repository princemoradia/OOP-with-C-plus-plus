#include<iostream>
using namespace std;
class postpri
{
    int m;
    public:
    postpri()
    {
        m=0;
    }
    postpri(int a)
    {
        m=a;
    }
    void display()
    {
        cout<<"The value of m is "<<m<<endl;
    }
    void operator++();
    void operator--();
};
void postpri::operator++()
{
    m=++m;
}
void postpri::operator--()
{
    m=--m;
}
int main()
{
    postpri p(7);
    p.display();
    ++p;
    p.display();
    --p;
    p.display();
    return 0;
}