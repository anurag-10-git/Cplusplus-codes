#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator
{
    private:
    int a;
    int b;
      
    public:
    SimpleCalculator()
    {
     cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
     
    }
    ~SimpleCalculator()
    {
     cout<<"destructor no 1 called!!!"<<endl;
    }
    protected:
    int sum()
    {
     return a+b;
    }
    int subtract()
    {
     return a-b;
    }
    int  multi()
    {
     return a*b;
    }
    float division()
    {
       return a/b;
    }
};
class ScientificCalc
{
    private:
    int x;
    
    public:
    ScientificCalc()
    {
      cout<<"enter value of x"<<endl;
        cin>>x;
      
    }
    ~ScientificCalc()
    {
        cout<<"destructor no 2 called!!!"<<endl;
    }
    protected:
    double powersqr()
    {
        return pow(x,2);
    }
    double xsqrt()
    {
     return sqrt(x);
    }
};
class HybridCalculator:public SimpleCalculator,public ScientificCalc
{
    
    private:
   double multisqrt()
    {
     return powersqr()*xsqrt();
    }
    public:
    void display()
    {
        cout<<"-------SIMPLE CALCULATOR--------"<<endl;
     cout<<"sum a and b is "<<sum()<<endl;
     cout<<"subtraction of a and b is "<<subtract()<<endl;
        cout<<"multiplication of a and b "<<multi()<<endl;
        cout<<"division of a and b "<<division()<<endl;
        cout<<"--------SCIENTIFIC CALCULATOR---------"<<endl;
        cout<<"square of x::"<<powersqr()<<endl;
        cout<<"sqareroot of x::"<<xsqrt()<<endl;
    cout<<"--------HYBRIDCALCULATOR--------"<<endl;
cout<<"multiplication of power square and square root of x is "<<multisqrt()<<endl;
           
     }
};
int main()
{
    HybridCalculator HC;
    HC.display();
    
}