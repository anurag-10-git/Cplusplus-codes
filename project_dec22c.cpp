#include<iostream>
using namespace std;
template<class X,class Y>
class myClass
{
    X data1;
    Y data2;
    
    public:
    myClass(X a,Y b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
     cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
 myClass<int,char> obj(12,'B');  
    obj.display(); 
}