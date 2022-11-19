#include<iostream>
using namespace std;
class time
{
    private:
    int hrs,mins;
    public:
    void gettime()
    {
       cout<<"enter the hours!"<<endl;
        cin>>hrs;
        cout<<"enter the minutes!!"<<endl;
        cin>>mins;
    }
    void settime(int h,int m)
    {
    hrs=h;mins=m;
    }
    void showtime()
    {
     cout<<hrs<<":"<<mins<<endl;
    }
    void sum(time t1,time t2)
    {
     int minutes=t1.mins+t2.mins;
         hrs=t1.hrs+t2.hrs+minutes/60;
        min=minutes%60;
    }
};
int main()
{
   class time t1,t2,t3;
    t1.gettime();
    t2.settime(3,45);
    t3.sum(t1,t2);
    cout<<"\nt1= ";
    t1.showtime();
    cout<<"t2= ";
    t2.showtime();
    cout<<"t3= ";
    t3.showtime();
}