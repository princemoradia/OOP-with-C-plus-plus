#include<iostream>
using namespace std;
class book
{
    char book[10],pub[10],auth[10];
    public:
    book()
    {
        book,pub,auth=0;
    }
    book(char a, char b, char c)
    {
        book=a;
        pub=b;
        auth=c;
    }
    void display()
    {
        cout<<"the book, pub and author are "<<book<<" "<<pub<<" "<<auth<<endl;
    }
    void operator<<();
    void operator>>();
};
void 