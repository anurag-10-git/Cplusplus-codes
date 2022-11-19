#include<iostream>
using namespace std;
class X
{
    public:
    class Y
    {
       private:
        int num;
        public:
        void setdata(int n) 
        {
         num=n;
        }
        void getdata()
        {
         cout<<num;
        }
    };
};
int main()
{
    class X::Y obj1;
    obj1.setdata(10);
    obj1.getdata();
}