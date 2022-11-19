#include<iostream>
#include<cmath>
using namespace std;
class coordinate
{
    private:
    float x;
    float y;
    friend void distance(coordinate ,coordinate );
    
    public:
    coordinate(int a,int b)
    {
     x=a;
     y=b;
    }
  void display()
    {
     cout<<"the coordinate is ("<<x<<","<<y<<")"<<endl;
        
    }
};
void distance(coordinate ob1,coordinate ob2)
{
 float d;
    d=sqrt(pow((ob2.x-ob1.x),2)+pow((ob2.y-ob1.y),2));
 cout<<d;
}
int main()
{
    coordinate co1(3,4),co2(5,6);
    co1.display();
    co2.display();
    
    cout<<"distance between coordinate ";
    distance(co1,co2);
    
}
