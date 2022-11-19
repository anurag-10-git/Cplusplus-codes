#include<iostream>
using namespace std;
class Deposit
{
    long int principal;
    int time;
    float rate;
    float total_amt;
    
    public:
    Deposit()
    {principal=time=rate=0;}
    Deposit(long p,int t,float r);
    Deposit(long p,int t);
    Deposit(long p,float r);
    void display()
    {
     cout<<"total amount="<<total_amt<<endl;
    }
    void calculate();
};
Deposit::Deposit(long p,int t,float r)
{
    principal=p;
    time=t;
    rate=r;
}
Deposit::Deposit(long p,int t)
{
    principal=p;
    time=t;
    rate=0.08;
}
Deposit::Deposit(long p,float r)
{
    principal=p;
    time=2;
    rate=r;
}
void Deposit::calculate()
{
    total_amt=principal+(float)(principal*time*rate)/100;
}
int main()
{
    class Deposit ob1,ob2(1000,2,0.05f),ob3(1200,2),ob4(2000,0.06f);
    ob2.calculate();
    ob3.calculate();
    ob4.calculate();
    ob2.display();
    ob3.display();
    ob4.display();
}