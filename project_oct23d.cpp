#include<iostream>
using namespace std;
int main()
{
    char str1[10], str2[10], str3[15];
    cout<<"enter the name of first person\n";
    gets(str1);
    cout<<"enter the name if second person\n";
    gets(str2);
    cout<<"\n"<<str1<<endl;
    puts(str2);
    cout<<endl;
   strcpy(str3,strcat(str1,str2));
   puts(str3);
    
    
}