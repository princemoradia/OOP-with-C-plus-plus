/*Create a class student that stores roll_no, name. Create a class test
that stores marks obtained in five subjects. Class result derived
from student and test contains the total marks and percentage
obtained in test. Input and display information of a student.*/
#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    char name[10];
    void set1()
    {
        cout<<"Enter the roll and name:"<<endl;
        cin>>roll>>name;
    }
    void display1()
    {
        cout<<"The roll no is "<<roll<<" and name is "<<name<<endl;
    }
};
class test{
    public:
    int marks[4];
    void set2()
    {
        for(int i=0;i<=4;i++)
        {
            cin>>marks[i];
        }
    }    
};
class result: public student,public test
{
    public:
    int sum=0,perc;
    void display()
    {
        for(int i=0;i<=4;i++)
        {
            sum=sum+marks[i];
        }
        cout<<"The total is "<<sum<<endl;
        cout<<"The perc is "<<sum/5<<endl;
    }
};
int main()
{
    result r1;
    r1.set1();
    r1.set2();
    r1.display1();
    r1.display();
    return 0;
}