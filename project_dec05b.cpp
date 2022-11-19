#include<iostream>
using namespace std;
void amount(float princ,int time=2,float rate=0.08);
int main()
{
    cout<<"case 1:"<<endl;
  amount(2000);
    cout<<"case 2:"<<endl;
    amount(2000,3);
    cout<<"case 3:"<<endl;
    amount(2000,4,0.13);
    cout<<"case 4"<<endl;
    amount(2000,0.9);
      
}
void amount(float princ,int time,float rate)
{
    
    cout<<"principle="<<princ<<endl;
    cout<<"time="<<time<<endl;
    cout<<"rate="<<rate<<endl;
    cout<<"interest amount="<<(princ*time*rate)<<endl;
}