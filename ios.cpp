#include<iostream>
#include<iomanip>
using namespace std;
class abc
{
    public:
    float book_price;
    int pages;
    char name[10];

    void setdata()
    {
        cout<<"Enter the book_price :"<<endl;
        cin>>book_price;
        cout<<"Enter the pages :"<<endl;
        cin>>pages;
        cout<<"Enter the name :"<<endl;
        cin>>name;
    }

    void display()
    {
        cout<<"------------------------------------------"<<endl;
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(10);
        cout<<fixed<<setprecision(2)<<book_price;
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(10);
        cout<<pages;
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(15);
        cout<<name;
    }
};
int main()
{
    abc a;
    a.setdata();
    a.display();
    return 0;
}