#include<iostream>
using namespace std;
class student
{
    int makrs;
    char name[10];
    public:
    int rollno;
    void getdata()
    {
        cout<<"Enter marks rollno and name:"<<endl;
        cin>>makrs>>rollno>>name;

    }
    void setdata()
    {
        cout<<"The marks is "<<makrs<<endl;
        cout<<"The name is "<<name<<endl;
        cout<<"The roll no is "<<rollno<<endl;
    }
};
int main()
{
    student s[3];
    student *ptr=&s[0];
    //ptr=&s[0];
    for(int i=0;i<=3;i++)
    {
        ptr->getdata();
        ptr->setdata();
    }
    return 0;
}
