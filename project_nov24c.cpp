#include<iostream>
using namespace std;
class LENGTH
{
    private:
    int feet;
    int inches;
    
    public:
    void setdata(int f,int i)
    {
        feet=f;
        inches=i;   
    }
    void display()
    {
       cout<<feet<<" feet "<<inches<<" inches"<<"\n";
    }
    LENGTH sum(LENGTH ,LENGTH);
}ob;
LENGTH LENGTH::sum(LENGTH ob2,LENGTH ob)
{
    LENGTH ob3;
    ob3.feet=ob.feet+ob2.feet+(ob.inches+ob2.inches)/12;
    ob3.inches=(ob.inches+ob2.inches)%12;
    return ob3;
}
int main()
{
    LENGTH o2,o1,total;
    o1.setdata(2,3);
    o2.setdata(4,5);
    total=o1.sum(o1,o2);
    total.display();
}