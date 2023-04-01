#include<iostream>
using namespace std;
template<typename T>
T large(T n1, T n2)
{
    return (n1>n2)?n1:n2;
}
int main()
{
    cout<<large(1,2)<<" is larger"<<endl;
    return 0;
}