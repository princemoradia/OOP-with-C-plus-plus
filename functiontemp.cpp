#include<iostream>
using namespace std;
template<typename T>
printdata(T value) 
{
    cout<<"The value is "<<value<<endl;
}
int main()
{
    int i=10;
    char *s="hello";
    float d=5.676;
    printdata(i);
    printdata(s);
    printdata(d);
    return 0;
}