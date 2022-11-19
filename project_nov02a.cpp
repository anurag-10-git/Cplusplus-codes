#include<iostream>
using namespace std;
void print(char str[])
{
    puts(str);
}
int main()
{
    char str[20];
    cout<<"enter the string"<<endl;
    gets(str);
    print(str);
}