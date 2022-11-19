#include<iostream>
using namespace std;
class CWH
{  
    public:
    string title;
    float rate;
    
    void virtual display()=0;
};
class CWHvideo:public CWH
{ 
    public:
    float vlength;
    void display()
    {
        cout<<"video name  : "<<title<<endl;
        cout<<"video length:"<<vlength<<endl;
        cout<<"rate        : "<<rate<<endl; 
    }
};
class CWHtext:public CWH
{  
  public:
    int text;
    void display()
  {
      cout<<"video name : "<<title<<endl;
        cout<<"text length : "<<text<<endl;
        cout<<"rate : "<<rate<<endl;   
  }  
};
int main()
{
  CWH *ptr;
  CWHtext dri,ob1;
  CWHvideo ob2;
  ptr=&dri;
    ptr->title="Spd";
    ptr->rate=4.5;
    dri.text=320;
    ptr->display();
    cout<<"----------------"<<endl;
    CWH* tut[2];
      tut[0]=&ob1;
      tut[1]=&ob2;
   tut[0]->display();
    cout<<"_________________"<<endl;
    tut[1]->display();
}