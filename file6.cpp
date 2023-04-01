#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream file1,file2,file3;
file1.open("7.txt",ios::in);
file2.open("8.txt",ios::in);
file3.open("9.txt",ios::app);
char ch1,ch2;
while(!file1.eof())
{
    file1.get(ch1);
    cout<<ch1<<endl;
    file3.put(ch1);
}
file1.close();
while(!file2.eof())
{
    file2.get(ch2);
    cout<<ch2<<endl;
    file3.put(ch2);
}
file2.close();
file3.close();
}