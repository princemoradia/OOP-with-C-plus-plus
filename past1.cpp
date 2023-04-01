#include<iostream>
using namespace std;
class instructor
{
    int phn;
    char fname[10],lname[10];
    public:
    instructor(int a,char b[10],char c[10])
    {
        phn=a;
        fname=b;
        lname=c;
    }
    void display2()
    {
        cout<<"The phn is "<<phn<<endl;
        cout<<"The fname is "<<fname<<endl;
        cout<<"The lname is "<<lname<<endl;
    }
};
class collegecourse : public instructor
{
    public:
    int room_no,no_of_credits;
    collegecourse(int x,int y)
    {
        room_no=x;
        no_of_credits=y;
    }
    void display()
    {

        cout<<"The room no is "<<room_no<<endl;
        cout<<"The no_of_credits is "<<no_of_credits<<endl;
    }
};
int main()
{
    instructor i(3432,prince,moradia);
    collegecourse c(11,1);
    i.display2();
    c.display();
    return 0;
}