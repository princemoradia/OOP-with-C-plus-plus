#include<iostream>
using namespace std;
class student
{
    public:
    int En_no;
    char name[10];
    void set1()
    {
        cout<<"Enter the name and En_no:"<<endl;
        cin>>name>>En_no;
    }
};
class Internal : public virtual student
{
    public:
    int Internal_mark;
    void set2()
    {
        cout<<"Enter the Internal_marks:"<<endl;
        cin>>Internal_mark;
    }
};
class External : public virtual student
{
    public:
    int External_mark;
    void set3()
    {
        cout<<"Enter the marks obtained in External:"<<endl;
        cin>>External_mark;
    }
};
class university
{
    public:
    int uni_marks;
    void set4()
    {
    cout<<"Enter the university marks:"<<endl;
    cin>>uni_marks;
    }
};
class Result: public university,public Internal,public External
{
    public:
    void set5()
    {
    cout<<"The name is "<<name<<endl;
    cout<<"The enrollment no is "<<En_no<<endl;
    cout<<"The internal exam marks is "<<Internal_mark<<endl;
    cout<<"The external exam marks is "<<External_mark<<endl;
    cout<<"The university marks is "<<uni_marks<<endl;
    }
};
int main()
{
    Result r;
    r.set1();
    r.set2();
    r.set3();
    r.set4();
    r.set5();
    return 0;
}