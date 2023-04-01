/*. Write a program to multiply the positive numbers using single inheritance.*/
#include<iostream>
using namespace std;
class multiply
    {
        public:
        int a,b;
        void setdata()
        {
            cout<<"Enter the value of a and b: "<<endl;
            cin>>a>>b;
        }
        void show()
        {
            cout<<"The value of a and b is "<<a<<" "<<b<<endl;
        }
    };
class result:public multiply
{
    public:
        void display()
        {
            cout<<"The mulitplication is "<<a*b<<endl;
        }
};
int main()
{
        result r;
        r.setdata();
        r.show();
        r.display();
        return 0;
}