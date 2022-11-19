#include<iostream>
using namespace std;
class TIME
{
    int hrs,min;
    friend TIME Manage(TIME ob1,TIME ob2);
    public:
    void gettime()
    {
     cout<<"enter hours"<<endl;
        cin>>hrs;
     cout<<"enter mins"<<endl;
        cin>>min;   
    }
    void settime(int h,int m)
    {
     hrs=h;
     min=m;   
    }
    void display()
   {
     cout<<hrs<<"::"<<min<<endl;
    }
};
TIME Manage(TIME ob1,TIME ob2)
{
 TIME ob3;
    ob3.hrs=ob1.hrs+ob2.hrs;
    ob3.min=ob1.min+ob2.min;      
    return ob3; 
}
int main()
{
    TIME ob1,ob2,obj3;
    ob1.gettime();
    ob1.display();
    ob2.settime(10, 12);
    ob2.display();
    obj3=Manage(ob1,ob2);
    obj3.display();
}