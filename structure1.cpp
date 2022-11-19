#include<iostream>
using namespace std;
struct detail
{
   int roll_no;
   char name[40];
   float avg;  
 };
int main()
{
    struct detail dtl1;
    dtl1.name;
    dtl1.roll_no;
    dtl1.avg;
    cout<<"Enter name: ";
    gets(dtl1.name);
    cout<<"\nEnter roll no: ";
    cin>>dtl1.roll_no;
    cout<<"\naverage: ";
    cin>>dtl1.avg;
    cout<<"\n----------------\n";
    
     cout<<"name: "<<dtl1.name;
    cout<<"\nroll no: "<<dtl1.roll_no;
    cout<<"\naverage: "<<dtl1.avg;
}