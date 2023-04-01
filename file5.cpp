#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1="prince is a good coder";
    
    ifstream infile("5.txt",ios::in);
    infile>>s1;

    ofstream out("6.txt",ios::out);
    out<<s1;
    return 0;
}