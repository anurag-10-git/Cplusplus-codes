#include<iostream>
using namespace std;
struct student
{
    int idNo;
    char name[15];
};
int main()
{
    student s1;
    cout<<"enter id"<<endl;
    cin>>(s1.idNo);
    cout<<"\nenter name"<<endl;
    cin>>(s1.name);

}