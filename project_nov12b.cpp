#include<iostream>
#include<string>
using namespace std;
class binary
{
    private:
    string s;
    
    
    public:
    void chk_bin();
    void getnum();
    void ones_compliment();
    void display();   
};
void binary::getnum()
{
    cout<<"enter the number to check binary"<<endl;
    cin>>s;
}
void binary::chk_bin()
{
   for(int i=0;i<s.length();i++)
    {
        if((s.at(i)!= '0')&&(s.at(i)!='1'))
        {
        cout<<"not a binary"<<endl;
            break;
        }
    }
}
void binary::ones_compliment()
{
    chk_bin();
    cout<<endl;
    for(int i=0;i<s.length();i++)
    {
  if(s.at(i)=='0') 
    {
     s.at(i)='1';
    }
    else
    s.at(i)='0'; 
}
}
void binary::display()
{
  for(int i=0;i<s.length();i++)  
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b; 
    b.getnum(); 
    //b.chk_bin(); 
    b.display(); 
    b.ones_compliment(); 
    b.display(); 
}