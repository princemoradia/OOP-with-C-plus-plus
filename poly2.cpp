/*Create a class student having private members marks, name and
public members rollno, getdata(), printdata(). Demonstrate
concept of pointer to class members for array of 3 objects*/
#include<iostream>
using namespace std;
class student
{
    int marks;
    char name[10];
    public:
    int rollno;
    void getdata()
    {
        cout<<"Enter the rollno: "<<endl;
        cin>>rollno;
        cout<<"Enter the marks: "<<endl;
        cin>>marks;
        cout<<"Enter the name: "<<endl;
        cin>>name;
    }
    void printdata()
    {
        cout<<"The rollno is "<<rollno<<endl;
        cout<<"The marks is "<<marks<<endl;
        cout<<"The name is "<<name<<endl;
    }
};
int main()
{
    student s[3];
    student *b;
    b=&s[0];
    for(int i=0;i<=3;i++)
    {
    b->getdata();
    b->printdata();
    b++;
    }
    return 0;
}