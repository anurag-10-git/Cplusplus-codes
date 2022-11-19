#include<iostream>
using namespace std;
class hospital
{
    private:
    char name[20];
   long int patient_no;int ward_no;
    
    public:
    void setdata();
   void getdata()  
    {
        cout<<"patient name: "<<endl;
        puts(name);
        cout<<"number: "<<patient_no<<endl;
        cout<<"ward no: "<<ward_no<<endl;    
    }
};
void hospital::setdata()
{
  cout<<"enter patient details"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"patient name: "<<endl;
    gets(name);
    cout<<"patient no.: "<<endl;
    cin>>patient_no;
    cout<<"ward no.: "<<endl;
    cin>>ward_no;
    cout<<"______________________"<<endl;  
}
int main()
{
    hospital patient1;
    patient1.setdata();
    patient1.getdata();
}