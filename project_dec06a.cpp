#include<iostream>
using namespace std;
class Sample
{
    int i;
    int j;
    ~Sample()
    {
     cout<<"destructor called!!!"<<endl;
    }
    friend void abc(void);
    public:
    Sample()
    {
     int i=0;
     int j=0;
    }
    void memb1();
    void memb2();
};
void Sample::memb1(void)
{
    Sample s1;
}
void Sample::memb2(void)
{
    Sample s2;
}
void abc(void)
{
    Sample s3;
}
int main()
{
    Sample s4;
}