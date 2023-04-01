#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter s1:"<<endl;
    cin>>s1;
    cout<<"Enter s2:"<<endl;
    cin>>s2;
    
    ifstream infile("1.txt",ios::in);
    infile>>s1;

    ifstream file("2.txt",ios::in);
    file>>s2;

    ofstream outfile("3.txt");
    outfile<<(s1+s2);
    return 0;
}