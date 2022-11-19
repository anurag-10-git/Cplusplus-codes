#include<iostream>
using namespace std;
class TIME
{
    private:
    int hrs,min,sec;
    
    public:
    int tot_secs;
   void setdata(int h,int m,int s)
    {
       hrs=h;
        min=m;
        sec=s;
        tot_secs=(h*60*60)+(m*60)+s;
    }
    void display()
    {
     cout<<"the time is:"<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    void convert(TIME t,char ch);
    void sum(TIME t1,TIME t2);
    int gethrs(){return hrs;}
    int getmin(){return min;}
    int getsec(){return sec;}
}t1,t2;
void TIME::convert(TIME t,char ch)
{
 switch(ch)  
    {
     case 'h':
        {
        cout<<"time in hours is:"<<t.hrs<<":"<<t.min<<":"<<t.sec<<"\n";
            break;
        } 
     case 'p':
        {
        cout<<"time in am/pm is:"<<((t.hrs>12)?(t.hrs-12):t.hrs)<<":"<<t.min<<":"<<t.sec;
        }
    }
}
void TIME::sum(TIME t1,TIME t2)
{
    int s,sq,m,mq,h;
    sq=(t1.sec+t2.sec)/60;
    s=(t1.sec+t2.sec)%60;
    mq=(t1.min+t2.min+sq)/60;
    m=(t1.min+t2.min+sq)%60;
    h=mq+t1.hrs+t2.hrs;
    if(h==24)
    {
     h=0;
     cout<<"Total time is: "<<h<<":"<<m<<":"<<s<<"\n";   
    }
}
void prnvalues(TIME t1)
{
    cout<<"Total secs: "<<t1.tot_secs;
    cout<<"\n";
}
int main()
{
    TIME tm1,tm2;
    tm1.setdata(5,00,00);
    tm2.setdata(19,00,38);
    cout<<"Enter h to convet in p to convert am/pm format: ";
    char ch;
    cin>>ch;
    tm1.convert(tm2,ch);
    tm1.sum(tm1,tm2);
    prnvalues(tm2);
}