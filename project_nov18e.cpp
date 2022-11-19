#include<iostream>
using namespace std;
class Student
{   
    private:
    string name;
    class Address
    {   
        public:
        string city;
        string street;
        string hno; 
    
        
        Address()
        {
           city="Ranchi";
            street="Harmu";
            hno="No";
        }   
    };
    
    public:
    Address ad;
    Student()
    {
        name="anurag";
    }
    void print()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"CITY:"<<ad.city<<endl;
        cout<<"STREET:"<<ad.street<<endl;
        cout<<"HOUSE NO.:"<<ad.hno<<endl;
    }
};
int main()
{
    class Student ob;
    ob.ad.hno="not";
    ob.print();
    
} 