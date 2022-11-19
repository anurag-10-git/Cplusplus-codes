#include<iostream>
using namespace std;
class Base1
{
    protected:
    int bas1int;
    
    public:
    void set_base1int(int a)
    {
        bas1int=a;
    }
};


class Base2
{
    protected:
    int bas2int;
    
    public:
    void set_base2int(int a2)
    {
        bas2int=a2;
    }
};

class Base3
{
    protected:
    int bas3int;
    
    public:
    void set_base3int(int a3)
    {
        bas3int=a3;
    }
};
class DERIVED:public Base1,public Base2,public Base3
{
    public:
    void show()
    {
        cout<<"the value of base 1::"<<bas1int<<endl;
        cout<<"the value of base 2::"<<bas2int<<endl;
        cout<<"the value of base 3::"<<bas3int<<endl;
        cout<<"the product of base1 and base2::"<<bas1int*bas2int*bas3int<<endl;
    }
};
int main()
{
    DERIVED d1;
    d1.set_base1int(20);
    d1.set_base2int(23);
    d1.set_base3int(14);
    d1.show();
}