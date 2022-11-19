#include<iostream>
using namespace std;
class c2;
class c1
{
  private:
    int val1;
    friend void swap(c1 &ob1,c2 &ob2);
    
    public:
    void getdata(int n1)
    {
     val1=n1;
    } 
    void display()
    {
     cout<<val1<<endl;
    }
};
class c2
{
    private:
    int val2;
    friend void swap(c1 &ob1,c2 &ob2);
    public:
    void getdata(int n2)
    {
     val2=n2;
    }
    void display()
    {
     cout<<val2<<endl;
    }
};
void swap(c1 &ob1,c2 &ob2)
{
    int temp=ob1.val1;
    ob1.val1=ob2.val2;
    ob2.val2=temp;
}
int main()
{
    c1 obj1;
    obj1.getdata(10);
    c2 obj2;
    obj2.getdata(20); 
    swap(obj1,obj2);
    cout<<"value of object.1 after swap=";
    obj1.display();
}