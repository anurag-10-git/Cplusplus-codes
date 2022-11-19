#include<iostream>
using namespace std;
void pointer_example(char* ptr,int length)
{
for(int i=0;i<=length;i++)
{
cout<<*ptr;
ptr++;
}
}
int main()
{
char string[15];
int length_string;
cout<<"enter string(<15)"<<endl;
gets(string);
length_string=strlen(string);
pointer_example(string,length_string);

}