#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char a[10],b[10];
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;

    ifstream infile('file1.txt',ios::in);
    infile>>a;

    ifstream infile('file2.txt',ios::in);
    infile>>b;

    ofstream outfile('file3.txt',ios::out);
    outfile<<a+b<<endl;
    return 0;
}