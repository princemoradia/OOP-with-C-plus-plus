/*Consider an example of declaring the examination result. Design three classes: student, 
exam and result. The student has data members such as rollno, name. Create the class 
exam by inheriting the student class. The exam class adds data members representing 
the marks scored in 5 subjects. Derive the result from exam-class and it has own data 
members like total, avg. Write the interactive program into model this relationship.*/
#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char name[10];
    void setdata()
    {
        cout<<"Enter the rollno :"<<endl;
        cin>>rollno;
        cout<<"Enter the name :"<<endl;
        cin>>name;
    }
};
class exam : public student
{
    public:
    int marks[4];
    void setdata1()
    {
        cout<<"Enter the marks obtained in 5 subjects :"<<endl;
        for(int i=0;i<=4;i++)
        {
            cin>>marks[i];
        }
    }
};
class result:public exam
{
    public:
    int sum=0,avg;
    void display()
    {
    for(int i=0;i<=4;i++)
    {
        sum=sum+marks[i];
    }
    cout<<"The total is "<<sum<<endl;
    cout<<"The average is "<<sum/5<<endl;
    }
};
int main()
{
    result r1;
    r1.setdata();
    r1.setdata1();
    r1.display();
    return 0;
}