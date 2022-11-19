#include<iostream>
using namespace std;
class RESORT
{
    private:
    int Rno;
    string Name;
    float Charges;
    int Days;
    
    float COMPUTE();
    
    public:
    void Getinfo();
    void Dispinfo();
};
void RESORT::Getinfo()
{
  cout<<"enter room no.: ";
    cin>>Rno;
  cout<<"\nenter name; ";
    cin>>Name;
  cout<<"\ncharges: ";
    cin>>Charges;
  cout<<"\nDays: ";
    cin>>Days;  
}
float RESORT::COMPUTE()
{
float amount=Charges*Days;
    if(amount>11000)
    {
     amount=amount*(float)1.02;
    }
    cout<<"\nthe amount is: ";
    return amount;
}
void RESORT::Dispinfo()
{
  cout<<"room no.: ";
    cout<<Rno;
  cout<<"\nname; ";
    cout<<Name;
  cout<<"\ncharges: ";
    cout<<Charges;
  cout<<"\nDays: ";
    cout<<Days;
      cout<<COMPUTE();
}
int main()
{
    class RESORT ob1;
    ob1.Getinfo();
    ob1.Dispinfo();
    
}