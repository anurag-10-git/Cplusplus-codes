#include<iostream>
using namespace std;
template<class T>
class golu
{
    public:
    T data;
    
    golu(T a)
    {
     data=a;
    }
    void display();
};
template<class T>
void golu<T>::display()
{
    cout<<data;
}
void func(int a)
{
    cout<<"i am first func value"<<a<<endl;
}
template<class x>
void func(x a)
{
    cout<<"i am second func value"<<a<<endl;
}
int main()
{
    golu<int>obj(3);
    cout<<obj.data<<endl;
    obj.display();
    cout<<endl;
    func(5);
    func(7.5);
}