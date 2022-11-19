#include<iostream>
using namespace std;
class X
{
    private:
    int a;
    void fx1();
    
    protected:
    char b;
    void fx2();
    
    public:
    float c;
    void fx3();
};
class Y
{
    private:
    int d;
    void fy1();
    
    protected:
    char e;
    void fy2();
    
    public:
    float f;
    void fy3();    
};
class Z:public X,public Y
{
    
};