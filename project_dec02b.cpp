#include<iostream>
using namespace std;
class bankdeposit
{
    private:
    int principle;
    int year;
    float rate;
    float returnvalue;
    
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
bankdeposit::bankdeposit(int p,int y,int r)
{
   principle=p;
   year=y;
   rate=(float)r/100;
   returnvalue=principle;
    for(int i=0;i<y;i++)
    {
     returnvalue=returnvalue*(1+rate);
    }
}
bankdeposit::bankdeposit(int p,int y,float r)
{
   principle=p;
   year=y;
   rate=r;
   returnvalue=principle;
    for(int i=0;i<y;i++)
    {
     returnvalue=returnvalue*(1+r);
    }
}
void bankdeposit::show()
{
    cout<<"principle amount was "<<principle<<" after year "<<year<<" return value is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit ob1;
    int p;
    int y;
    float r;
    int R;
    cout<<"enter principle amount:"<<endl;
    cin>>p;
    cout<<"enter year:"<<endl;
    cin>>y;
    cout<<"enter rate:"<<endl;
    cin>>r;
  ob1=bankdeposit(p,y,r);
    ob1.show();
    
    cout<<"enter principle amount:"<<endl;
    cin>>p;
    cout<<"enter year:"<<endl;
    cin>>y;
    cout<<"enter rate in percentage:"<<endl;
    cin>>R;
bankdeposit ob2=bankdeposit(p,y,R);
    ob2.show();
    return 0;
}